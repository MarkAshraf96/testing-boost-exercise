#define BOOST_TEST_DYN_LINK
#include <Eigen/Dense>
#include <boost/test/unit_test.hpp>
#include "matrixIO.hpp"

using namespace Eigen;



BOOST_FIXTURE_TEST_SUITE(matrixIOTests)

BOOST_AUTO_TEST_CASE(matrixIOTest)
{
  MatrixXd outputMatrix = matrixIO::openData("../data/m3.csv", 3);
  expected = MatrixXd(3, 3);
    expected << 0.680375, 0.59688, -0.329554, -0.211234, 0.823295, 0.536459,
        0.566198, -0.604897, -0.444451;
    
  BOOST_TEST(expected(0, 0) == outputMatrix(0, 0));
  BOOST_TEST(expected(0, 1) == outputMatrix(0, 1));
  BOOST_TEST(expected(0, 2) == outputMatrix(0, 2));
  BOOST_TEST(expected(1, 0) == outputMatrix(1, 0));
  BOOST_TEST(expected(1, 1) == outputMatrix(1, 1));
  BOOST_TEST(expected(1, 2) == outputMatrix(1, 2));
  BOOST_TEST(expected(2, 0) == outputMatrix(2, 0));
  BOOST_TEST(expected(2, 1) == outputMatrix(2, 1));
  BOOST_TEST(expected(2, 2) == outputMatrix(2, 2));
}

BOOST_AUTO_TEST_SUITE_END()