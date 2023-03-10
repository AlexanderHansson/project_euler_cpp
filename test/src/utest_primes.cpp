#include <gtest/gtest.h>
#include <euler/primes.hpp>
#include <algorithm>
#include <vector>

TEST(Primes, TestGetPrimes) {
    std::vector<size_t> primes = euler_primes::get_primes(83);

    EXPECT_EQ(primes.size(), 23)
        << "Expected 23 primes under 83, received: " << primes.size();

    EXPECT_EQ(primes.back(), 83)
        << "Expected last prime under 83 to be 83, got: " << primes.back();

    EXPECT_EQ(primes.front(), 2)
        << "Expected first prime under 83 to be 2, got: " << primes.back();

    primes = euler_primes::get_primes(0);
    EXPECT_EQ(primes.size(), 0)
        << "Expected get_primes(0) to return empty list";

    primes = euler_primes::get_primes(1);
    EXPECT_EQ(primes.size(), 0)
        << "Expected get_primes(1) to return empty list";

    primes = euler_primes::get_primes(2);
    EXPECT_EQ(primes.size(), 1)
        << "Expected get_primes(2) to return one element";
}

TEST(Primes, TestIsPrime) {
    EXPECT_TRUE(euler_primes::is_prime(2))
        << "Expected 2 to be a prime";

    EXPECT_TRUE(euler_primes::is_prime(173))
        << "Exptected 173 to be a prime";

    EXPECT_TRUE(euler_primes::is_prime(1223))
        << "Expected 1223 to be a prime";

    EXPECT_TRUE(euler_primes::is_prime(439))
        << "Expected 439 to be a prime";

    EXPECT_FALSE(euler_primes::is_prime(4))
        << "Did not expect 4 to be a prime";

    EXPECT_FALSE(euler_primes::is_prime(0))
        << "Did not expect 0 to be a prime";

    EXPECT_FALSE(euler_primes::is_prime(1))
        << "Did not expect 1 to be a prime";

    EXPECT_FALSE(euler_primes::is_prime(100))
        << "Did not expect 100 to be a prime";
}

TEST(Primes, TestPrimeFactorize) {
    std::vector<size_t> factors = {2,487,1117,1223};
    size_t num = 1;
    for (size_t f : factors) {
        num *= f;
    }
    std::vector<size_t> pfactors = euler_primes::prime_factorize(num);
    ASSERT_EQ(factors.size(), pfactors.size()) << "prime_factorize returned wrong size";
    for (size_t i = 0; i < factors.size(); i++) {
        EXPECT_NE(std::find(pfactors.begin(), pfactors.end(), factors[i]), pfactors.end())
            << "Could not find prime factor " << factors[i] << " after calling prime_factorize";
    }

    pfactors = euler_primes::prime_factorize(1217);
    EXPECT_EQ(pfactors.size(), 1)
        << "Expected prime_factorize(1217) to return one element";

    EXPECT_EQ(pfactors[0], 1217)
        << "Expected prime_factorize(1217) to return 1217";

    pfactors = euler_primes::prime_factorize(1);
    EXPECT_EQ(pfactors.size(), 0)
        << "expected prime_factorize(1) to return empty list";

    pfactors = euler_primes::prime_factorize(0);
    EXPECT_EQ(pfactors.size(), 0)
        << "expected prime_factorize(0) to return empty list";

    pfactors = euler_primes::prime_factorize(2);
    EXPECT_EQ(pfactors.size(), 1)
        << "expected prime_factorize(2) to return one element";

    EXPECT_EQ(pfactors[0], 2)
        << "Expected prime_factorize(2) to return 2";
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
