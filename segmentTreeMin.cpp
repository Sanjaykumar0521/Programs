#include <iostream>
using namespace std;
int tree[20005], a[1005];

void build(int v, int low, int high, int tree[], int a[]) {
  if (low == high)
    tree[v] = a[low];
  else {
    int mid = (low + high) / 2;
    build(2 * v+1, low, mid, tree, a);
    build(2 * v + 2, mid + 1, high, tree, a);
    if (tree[2 * v+1] < tree[2 * v + 2])
      tree[v] = tree[2 * v+1];
    else
      tree[v] = tree[2 * v + 2];
  }
}
void update(int v, int low, int high, int idx, int val, int tree[]) {
  if (low == high) {
    tree[v] = val;
  } else {
    int mid = (low + high) / 2;
    if (idx >= low && idx <= mid)
      update(2 * v+1, low, mid, idx, val, tree, a);
    else
      update(2 * v + 2, mid + 1, high, idx, val, tree, a);
    if (tree[2 * v+1] < tree[2 * v + 2])
      tree[v] = tree[2 * v+1];
    else
      tree[v] = tree[2 * v + 2];
  }
}
int range_min(int v, int low, int high, int l, int r, int tree[]) {
  if (l > high || low > r)
    return 100005;
  if (l <= low && r >= high)
    return tree[v];
  int p1, p2;
  int mid = (low + high) / 2;
  p1 = range_min(2 * v+1, low, mid, l, r, tree);
  p2 = range_min(2 * v + 2, mid + 1, high, l, r, tree);
  if (p1 < p2)
    return p1;
  else
    return p2;
}
int main() {
  int n, q;
  cin >> n;
  for (int i = 0; i <n; i++) {
    cin >> a[i];
  }
  build(0, 0, n-1, tree, a);
  for (int i = 0; i <2*n-1; i++) {
    cout<<tree[i]<<" ";
  }
  int x,y;
  cin>>x>>y;
  cout<<sum(0,0,n,x,y,tree);
return 0;
}
