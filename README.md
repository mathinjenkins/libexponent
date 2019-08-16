# libexponent

`libexponent` is a naive and inefficient implementation of calculating ![](http://www.sciweavers.org/tex2img.php?eq=%20x%5E%7Bn%7D%20&bc=White&fc=Black&im=jpg&fs=12&ff=arev&edit=0).

### Method
The implementation iteratively multiplies `x` by itself `n` times.

### Build
* `git clone git@github.com:mathinjenkins/libexponent.git`
* `cd libexponent`
* `mkdir build && cd build`
* `cmake ../`
* `make`
* `./test/exponent_test`

### License
MIT License. 

Copyright (c) 2019 Abdelrahman Hosny
