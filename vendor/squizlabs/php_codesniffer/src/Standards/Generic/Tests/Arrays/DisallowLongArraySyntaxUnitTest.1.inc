<?php

$var = array();
$var = [1,2,3];
$var = array(1,2,3);
echo $var[1];
$foo = array($var[1],$var[2]);
$foo = array(
        1,
        2,
        3
       );
$var = array/*comment*/(1,2,3);

function foo(array $array)
{
}

$a = function (array $array) use ($foo): array {
};

abstract function foo(): array;

abstract function foo(): Foo\Bar;

abstract function foo(): \Foo\Bar;

array_map(
    static fn (array $value): array => array_filter($value),
    []
);

class Foo
{
    function array()
    {
    }
}

$obj->array(1, 2, 3);
