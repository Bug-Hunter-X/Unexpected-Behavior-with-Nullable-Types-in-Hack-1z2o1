function foo(x: int): int {
  return x + 1;
}

function bar(): void {
  $x = foo(1);
  echo $x; // This will print 2

  $y = foo(5);
  echo $y; // This will print 6

  try {
    $z = foo(null);
  } catch (Exception $e) {
    echo $e->getMessage(); // Handle the exception properly
  }

}

