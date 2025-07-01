#include <vector>

class ProductOfNumbers {
public:
    std::vector<int> product_prefix; // Renamed for clarity
    int last_zero_index; // To track the index of the last zero

    ProductOfNumbers() {
        product_prefix.push_back(1);
        last_zero_index = -1; // Initialize to -1, indicating no zero encountered yet
    }

    void add(int num) {
        if (num == 0) {
            product_prefix.clear();
            product_prefix.push_back(1);
            last_zero_index = product_prefix.size() - 1;
        } else {
            product_prefix.push_back(product_prefix.back() * num);
        }
    }

    int getProduct(int k) {
        if (product_prefix.size() - 1 - last_zero_index < k) {
            return 0;
        }

        return product_prefix.back() / product_prefix[product_prefix.size() - 1 - k];
    }
};