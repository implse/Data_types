# Data Types in C

  - Signed Char, byte

  - Unsigned Char, byte

  - Signed Short, word

  - Unsigned Short, word

  - Signed 32 Integer, double words, dwods

  - Unsigned 32 Integer, double words, dwods

  - Unsigned 64 Integer, double words, dwods

  - Unsigned 64 Integer, double words, dwods

  - Float (imprecise but infinite range)

  - Double


## Signed Int

The `int` data type is used for variables that will store `integers`.

Integers always take up `4 bytes` of memory `32 bits`.

This means the range of values `int` can store is limited to `32 bits` worth information.


` Integer Range : -2 ** 31 to 2 ** 31 - 1`


## Unsigned Int

`unsigned`is a qualifier that can be applied to certain types (including `int`), which effectively doubles the positive range of variables of that type, at the cost of disallowing any negative values.

` Unsigned Integer Range : 0 to 2 ** 32 - 1`


## Char

The `char` data type is used for variables that will store single characters.

Character always take up `1 byte` of memory `8 bit`.

This mean the range of values `char` can store is necessarily limited to `8 bit` worth of information.


## Float

The `float`data types is used for variables that will store `floating-point` values, also known as real numbers.

Floating points values always take up `4 byte` of memory `32 bits`.


## Double 

The `double`data type is used for variables that will store `floating-point` values, also known as real numbers.

The difference is that doubles are `double precision`. They always take up `8 byte` of memory `64 bit`.

With an additional `32 bit` of precision relative to a `float`, `double` allow us to be specify much more precise real numbers.


## Bool 

The `bool` data type is used for variables that will store a Boolean value. More precisely, they are capable only of storing one of two values : `true` or `false`.


## Void

`void` is a type, but not a `data type`.

Function can have a `void` return type, which just means they don't return a value.

The parameters list of a function can also be `void`. It simply means the function takes no parameters.
