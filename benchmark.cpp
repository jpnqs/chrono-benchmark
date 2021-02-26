#include "benchmark.h"

// use project namespace
using namespace bny;

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
ms_t benchmark::end()
{
	m_endTime = std::chrono::high_resolution_clock::now();

	ms_t duration = (ms_t)std::chrono::duration_cast<std::chrono::microseconds>(m_endTime - m_startTime).count();

	m_ellapsedTime = duration / c_msfactor;

	return m_ellapsedTime;
}

/// Get the ellapsed milliseconds
/// </summary>
/// <returns>ellapsed milliseconds</returns>
ms_t benchmark::get_ellapsed_time()
{
	return m_ellapsedTime;
}
