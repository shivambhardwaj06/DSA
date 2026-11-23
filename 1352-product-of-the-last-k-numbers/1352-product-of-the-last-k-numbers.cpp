
class ProductOfNumbers {
private:
    vector<int> ans;

public:
    ProductOfNumbers() {
        ans.push_back(1);
    }

    void add(int num) {
        if (num == 0) {
            ans.clear();
            ans.push_back(1);
            return;
        }

        ans.push_back(ans.back() * num);
    }

    int getProduct(int k) {
        int n = ans.size();

        if (k >= n)
            return 0;

        return ans[n - 1] / ans[n - k - 1];
    }
};
