typedef long long ll;
int N;
//---------------------------------------------------------------------------------------------------
void _main()
{
    cin >> N;
    vector<pair<int, int>> va, vb;
    rep(i, 0, N)
    {
        int x, y;
        cin >> x >> y;
        va.push_back({ x, i });
        vb.push_back({ y, i });
    }

    vector<tuple<int, int, int>> edges;
    sort(va.begin(), va.end());
    sort(vb.begin(), vb.end());
    rep(i, 0, N - 1)
    {
        edges.push_back(make_tuple(va[i + 1].first - va[i].first, va[i].second, va[i + 1].second));
        edges.push_back(make_tuple(vb[i + 1].first - vb[i].first, vb[i].second, vb[i + 1].second));
    }
    sort(edges.begin(), edges.end());

    UnionFind uf(N);
    ll ans = 0;
    for (auto p : edges) {
        int x, y, c;
        tie(c, x, y) = p;

        if (uf[x] != uf[y]) {
            uf(x, y);
            ans += c;
        }
    }
    cout << ans << endl;
}
