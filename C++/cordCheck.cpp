#include <cstdio> 
#include <iostream>
#include <algorithm>

using namespace std;

struct edge{
	int a, b, len, info;
} a[100005];

int n, m, l, sign;
bool ok[100005], vis[100005];
int fa[100005], dfn[100005], low[100005], ins[100005], last[100005], from[100005];
int other[200005], info[200005], ans[200005], pre[200005];

void add(int u, int v, int r) {
	pre[++l] = last[u];
	last[u] = l;
	other[l] = v;
	info[l] = r;
}

bool cmp(edge a, edge b) {
	return a.len < b.len;
}

int get(int x) {
	if (fa[x] == x) return x;
	fa[x] = get(fa[x]);
	return fa[x];
}

void tarjan(int x) {
	dfn[x] = low[x] = ++sign;
	vis[x] = true;
	for (int p = last[x]; p != 0; p = pre[p]) {
		int q = other[p];
		if (!vis[q]) {
			from[q] = info[p];
			tarjan(q);
			low[x] = min(low[x], low[q]);
		} else if (info[p] != from[x]) low[x] = min(low[x], low[q]);
	}
	if (dfn[x] == low[x] && from[x] != 0) ans[from[x]] = 1;
}

int main() {
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= m; i ++) scanf("%d%d%d", &a[i].a, &a[i].b, &a[i].len);
	for (int i = 1; i <= m; i ++) a[i].info = i;
	for (int i = 1; i <= n; i ++) fa[i] = i;
	sort(a + 1, a + m + 1, cmp);
	for (int i = 1; i <= m; i ++) {
		int j;
		for (j = i + 1; (j <= m && a[j].len == a[j - 1].len); j++)
		l = 0;
		for (int k = i; k < j; k ++) {
			int fx=get(a[k].a);
			int fy=get(a[k].b);
			if (fx == fy) {
				ans[a[k].info] = 3;
			} else {
				ok[k] = true;
				last[fx] = 0;
				last[fy] = 0;
				vis[fx] = 0;
				vis[fy] = 0;
				from[fx] = 0;
				from[fy] = 0;
			}
		}
		for (int k = i; k < j; k ++) if (ok[k]) {
			int fx=get(a[k].a);
			int fy=get(a[k].b);
			add(fx, fy, a[k].info);
			add(fy, fx, a[k].info);
		}
		for (int k = i; k < j; k ++) if (ok[k]) {
			int fx=get(a[k].a);
			int fy=get(a[k].b);
			if (!vis[fx]) tarjan(fx);
			if (!vis[fy]) tarjan(fy);
		}
		for (int k = i; k < j; k ++) if (ok[k]) {
			int fx=get(a[k].a);
			int fy=get(a[k].b);
			fa[fx] = fy;
		}
		i = j - 1;
	}
	for (int i = 1; i <= m; i ++) {
		if (ans[i] == 1) puts("any");
		else if (ans[i] == 3) puts("none");
		else puts("at least one");
	}
	return 0;
}