// Last updated: 4/13/2026, 3:32:39 PM
// clang-format off
static const auto io_sync_off = []() { ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); return 0; }();
using ll = long long; using SS = stringstream;
using pii = pair<int, int>; using pis = pair<int, string>; using psi = pair<string, int>;
template<typename T> using V = vector<T>; template<typename T> using VV = V<V<T>>; template<typename T> using VVV = VV<V<T>>;
using vi = V<int>; using vvi = VV<int>; using vvvi = VVV<int>; using vb = V<bool>; using vvb = VV<bool>; using vs = V<string>; using vd = V<double>; using vli = V<list<int>>;
template<typename T> using US = unordered_set<T>; template<typename A, typename B> using UM = unordered_map<A, B>;
using si = set<int>; using usi = US<int>; using uss = US<string>;
using mii = map<int, int>; using umii = UM<int, int>; using umib = UM<int, bool>; using umsi = UM<string, int>;
using pqi = priority_queue<int, vi, greater<int>>; using pqri = priority_queue<int, vi>;
constexpr int BIG = 1e9; constexpr int MOD = 1e9 + 7; constexpr int MAX_INT = INT_MAX; constexpr bool fasle = false;
#define F(i, a, b) for(int(i) = (a); (i) < (b); ++(i))
#define Fe(i, a, b) for(int(i) = (a); (i) <= (b); ++(i))
#define FR(i, a, b) for(int(i) = (a); (i) >= (b); --(i))
#define FRn(i, a, b) for(int(i) = (a); (i) > (b); --(i))
#define FE(a, v) for(auto &(a): (v)) // For each element in a container...
#define FEv(v, m) for(auto &[k, v]: (m)) // For each element in a map or unordered_map...
#define FEt(t, s) SS ss(s); for(string (t); ss >> (t);) // For each token in a string...
#define W(n) while((n)--)
#define ALL(v) (v).begin(), (v).end()
#define SORT(v) sort(ALL(v)) // Sort elements in ascending order.
#define SORTf(v, f) sort(ALL(v), (f)) // Sort elements based on a function. E.g. `SORTf(v, greater())`.
#define SORTfab(v, fab) sort(ALL(v), [&](auto &a, auto &b) { return (fab); }) // Sort elements based on an expression of any 2 elements `a` and `b`.
#define COUNT(v, k) count(ALL(v), (k)) // Count elements with value `k`.
#define COUNTfa(v, fa) count_if(ALL(v), [&](auto &a) { return (fa); }) // Count elements based on an expression of any elemnent `a`.
#define R(v) reverse(ALL(v)) // Reverse elements in a container.
#define sz(v) int((v).size())
#define szv(n, v) int(n) = sz(v)
#define szvv(m, n, vv) int(m) = sz(vv), (n) = (m) ? sz((vv)[0]) : 0
#define maxv(v) *max_element(ALL(v)) // Max element in a container.
#define minv(v) *min_element(ALL(v)) // Min element in a container.
#define MI(a, b) (a) = min((a), (b))
#define MA(a, b) (a) = max((a), (b))
#define IOTA(v) iota(ALL(v), 0) // Fill a container with 0, 1, 2, ...
#define SUM(v) accumulate(ALL(v), 0) // Sum of elements in a container.
template<typename T> T Pop(queue<T> &q) { int r = q.front(); q.pop(); return r; } template<typename C> typename C::value_type Pop(C &c) { int r = c.top(); c.pop(); return r; }
template<typename A> VV<A> T(const VV<A> &vv) { szvv(m, n, vv); VV<A> r(n, VV<A>(m)); for(int y = 0; y < n; y++) for(int x = 0; x < m; x++) r[y][x] = vv[x][y]; return r; }
template<typename T> void P_(const T &t) { cout << t << " "; } template<typename T> void P_(const V<T> &v) { FE(k, v) cout << k << " "; cout << endl; } template<typename T> void P_(const VV<T> &vv) { FE(v, vv) { FE(k, v) cout << k << " "; cout << endl; } }
template<typename ...T> void P(const T& ...t) { (P_(t), ...); cout << endl; }
class Solution {
public:
    bool isprime(int n){
        if(n==1) return false;
        if(n==2) return true;
        if(n%2==0) return false;
        for(int i=3;i*i<=n;i+=2){
            if(n%i==0) return false;
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int n=nums.size();
        int max=0;
        for(int i=0;i<n;i++){
           if(isprime(nums[i][i])&&nums[i][i]>max) max=nums[i][i];
           if(isprime(nums[i][n-i-1])&&nums[i][n-i-1]>max) max=nums[i][n-i-1];
        }
        return max;
    }
};