add_test([=[QuicksortTest.CheckWorking]=]  D:/Projects/ADS/cint/build/test/Debug/cint_tests.exe [==[--gtest_filter=QuicksortTest.CheckWorking]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[QuicksortTest.CheckWorking]=]  PROPERTIES WORKING_DIRECTORY D:/Projects/ADS/cint/build/test SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  cint_tests_TESTS QuicksortTest.CheckWorking)
