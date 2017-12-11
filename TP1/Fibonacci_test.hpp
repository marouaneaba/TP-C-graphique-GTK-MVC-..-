#include "Fibonacci.hpp"

BOOST_AUTO_TEST_CASE(fibonacci_test1) { // test unitaire
  BOOST_CHECK_EQUAL(fibonacciRecursif(0),0);
  BOOST_CHECK_EQUAL(fibonacciRecursif(1),1);
  BOOST_CHECK_EQUAL(fibonacciRecursif(2),1);
  BOOST_CHECK_EQUAL(fibonacciRecursif(3),2);
  BOOST_CHECK_EQUAL(fibonacciRecursif(4),3);
}

BOOST_AUTO_TEST_CASE(fibonacci_test2) { // test unitaire
  BOOST_CHECK_EQUAL(fibonacciIteratif(0),0);
  BOOST_CHECK_EQUAL(fibonacciIteratif(1),1);
  BOOST_CHECK_EQUAL(fibonacciIteratif(2),1);
  BOOST_CHECK_EQUAL(fibonacciIteratif(3),2);
  BOOST_CHECK_EQUAL(fibonacciIteratif(4),3);
}
