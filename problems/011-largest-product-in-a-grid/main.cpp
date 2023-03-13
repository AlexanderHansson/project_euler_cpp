#include <iostream>
#include <vector>

size_t grid[20][20];
constexpr size_t num_nbrs = 4;

size_t process_index(size_t r, size_t c) {
    size_t horiz = 1;
    size_t vertic = 1;
    size_t diagd = 1;
    size_t diagu = 1;

    // horizontal
    if (c+3 < 20) {
        for (size_t i = 0; i < num_nbrs; i++) {
            horiz *= grid[r][c+i];
        }
    }

    //vertical
    if (r+3 < 20) {
        for (size_t i = 0; i < num_nbrs; i++) {
            vertic *= grid[r+i][c];
        }
    }

    // diag down
    if (vertic > 1 && horiz > 1) {
        for (size_t i = 0; i < num_nbrs; i++) {
            diagd *= grid[r+i][c+i];
        }
    }

    // diag up
    if (horiz > 1 && r > 2) {
        for (size_t i = 0; i < num_nbrs; i++) {
            diagu *= grid[r-i][c+i];
        }
    }

    size_t max = horiz;
    max = max < vertic?vertic:max;
    max = max < diagd?diagd:max;
    max = max < diagu?diagu:max;
    return max;
}

int main() {
    std::size_t value;
    size_t global_max = 1;
    size_t r = 0;
    size_t c = 0;
    for (size_t r = 0; r < 20; r++) {
        for (size_t c = 0; c < 20; c++) {
            std::cin >> grid[r][c];
        }
    }

    for (size_t r = 0; r < 20; r++) {
        for (size_t c = 0; c < 20; c++) {
            size_t local_max = process_index(r,c);
            if (local_max > global_max) {
                std::cout << "Found new: " << local_max << std::endl;
                global_max = local_max;
            }
        }
    }
    return 0;
}
