# chrono-benchmark
Small C++ class for chrono based benchmarks / time measurements

## Example

Example code for the use of the benchmark class:

```cpp
#include "benchmark.h"

void main() {

  benchmark time;

  time.start();

  for (uint32_t i = 0; i < 1000000; i++) 
  {
    // do nothing, just waste time
  }

  time.end();

  std::cout << "Consumed time in milliseocnds: " << time.get_ms();

}

```

## Methods

```cpp
void start()
```

Start the clock of the benchmark instance

```cpp
void end()
```

End the clock of the benchmark and calculate the ellapsed time between ```start()``` and ```end()``` call. 

```cpp
µs_t get_µs()
```

Get the ellapsed time as microseconds

```cpp
ms_t get_ms()
```

Get the ellapsed time as milliseconds

```cpp
sec_t get_sec()
```

Get the ellapsed time as seconds

## Constants 

```cpp
constexpr long double c_msfactor = 1000.0;
```

Conversion factor from microseconds to milliseconds

```cpp
constexpr long double c_secFactor = 1000.0 * c_msfactor;
```

Conversion factor from microseconds to seconds

## Types

New defined data types and their basic type:

| Name | Type |
|:-----|:-----|
|µs_t|```long double```|
|ms_t|```long double```|
|sec_t|```long double```|
|time_point_t |```std::chrono::time_point<std::chrono::steady_clock>```|
