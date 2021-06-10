
test_that("package dynlib works", {
  expect_null(.Call(teos10_c_dummy))
})
