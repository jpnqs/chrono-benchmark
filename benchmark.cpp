#include "benchmark.h"

/// <summary>
/// Set the start point of the benchmark clock
/// </summary>
void benchmark::start()
{
	m_startTime = std::chrono::high_resolution_clock::now();
}

/// <summary>
/// Set the end point of the benchmark clock 
/// and calculate the ellapsed milliseconds
/// </summary>
/// <returns>ellapsed milliseconds</returns>
void benchmark::end()
{
	m_endTime = std::chrono::high_resolution_clock::now();

	m_ellapsedTime = (µs_t)std::chrono::duration_cast<std::chrono::microseconds>(m_endTime - m_startTime).count();
}

/// <summary>
/// Get the ellapsed microseconds
/// </summary>
/// <returns>ellapsed microseconds</returns>
µs_t benchmark::get_µs()
{
	return m_ellapsedTime;
}

/// Get the ellapsed milliseconds
/// </summary>
/// <returns>ellapsed milliseconds</returns>
ms_t benchmark::get_ms()
{
	return m_ellapsedTime / c_msfactor;
}

/// <summary>
/// Get the ellapsed seconds
/// </summary>
/// <returns>ellapsed seconds</returns>
sec_t benchmark::get_sec()
{
	return m_ellapsedTime / c_secFactor;
}
