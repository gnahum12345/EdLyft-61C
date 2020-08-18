# README 

## How to Compile
In order to compile your code please run 
```
gcc -o {outputfile}.o {inputfile} 
```

i.e. if we wanted to compile `fib.c` into `fib.o`

run: 
``` 
gcc -o fib.o fib.c
```

## Recommendations

Change the string for char and see what happens! 

## Visualize Code: 

Go to this short url: shorturl.at/cfRW1
Go to this long url: [pythontutor](http://www.pythontutor.com/c.html#code=//%20Example%20C%20code%20for%20OPT%0A//%20From%3A%20http%3A//stackoverflow.com/questions/2124600/how-to-reverse-a-string-in-place-in-c-using-pointers%0A%23include%20%3Cstring.h%3E%0A%23include%20%3Cstdlib.h%3E%0A%0Avoid%20reverse%28char%20*x,%20int%20begin,%20int%20end%29%20%7B%0A%20%20char%20c%3B%20%0A%20%20if%20%28begin%20%3E%3D%20end%29%20%7B%0A%20%20%20%20%20return%20%3B%20//%20%20byeeeeeeeee%20.%20%20%0A%20%20%7D%20%20%0A%20%20c%20%3D%20*%28x%20%2B%20begin%29%3B%20//equivalent%20python%20-%3E%20%20x%5Bbegin%5D%20%20%20//%20x%3D%200x01%20begin%20%3D2%20%28x%2B%204%29%20%3D%200x05%0A%20%20*%28x%2B%20begin%29%20%3D%20*%28x%20%2B%20end%29%3B%20//%20x%5Bbegin%5D%20%3D%20x%5Bend%5D%20%0A%20%20*%28x%2B%20end%29%20%3D%20c%3B%20%20//%20x%5Bend%5D%20%3D%20c%0A%20%20reverse%28x,%20%2B%2Bbegin,%20--end%29%3B%20//%20reverse%28x,%20begin%20%2B1,%20end%20-%201%29%20%0A%7D%20%0A%0A%0A%0Aint%20main%28%29%20%7B%0A%20%20char%20*x%20%3D%20malloc%2820%29%3B%0A%20%20strcpy%28x,%20%22Hello%20world!%22%29%3B%20//%20copying%20the%20string%20over%20to%20array%20x.%20%0A%20%20reverse%28x,%200,%20strlen%28x%29%20%20-1%20%29%3B%0A%20%20return%200%3B%0A%7D&mode=edit&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D)
