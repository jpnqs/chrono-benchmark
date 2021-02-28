#pragma once
#include <chrono>

constexpr long double c_msfactor = 1000.0;
constexpr long double c_secFactor = 1000.0 * c_msfactor;

typedef std::chrono::time_point<std::chrono::steady_clock> time_point_t;
typedef long double µs_t;
typedef long double ms_t;
typedef long double sec_t;

/// <summary>
/// Class for benchmarking 
/// </summary>
class benchmark
{
public:
	/// <summary>
	/// Set the start point of the benchmark clock
	/// </summary>
	void start();

	/// <summary>
	/// Set the end point of the benchmark clock 
	/// and calculate the ellapsed milliseconds
	/// </summary>
	/// <returns>ellapsed milliseconds</returns>
	void end();

	/// <summary>
	/// Get the ellapsed microseconds
	/// </summary>
	/// <returns>ellapsed microseconds</returns>
	µs_t get_µs();

	/// <summary>
	/// Get the ellapsed milliseconds
	/// </summary>
	/// <returns>ellapsed milliseconds</returns>
	ms_t get_ms();

	/// <summary>
	/// Get the ellapsed seconds
	/// </summary>
	/// <returns>ellapsed seconds</returns>
	sec_t get_sec();

private:
	time_point_t m_startTime;
	time_point_t m_endTime;
	µs_t m_ellapsedTime;

};
