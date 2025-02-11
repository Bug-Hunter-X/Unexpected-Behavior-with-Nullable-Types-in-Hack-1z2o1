function foo(x: ?int): int {
  if (x == null) {
    return 1;
  }
  return x + 1;
}

function bar(): void {
  $x = foo(null);
  echo $x; // This will print 1

  $y = foo(5);
  echo $y; // This will print 6

  $z = foo(null as ?int);
  echo $z; // This will print 1

  $w = foo(?int(null));
  echo $w; // This will result in a compile time error
}

