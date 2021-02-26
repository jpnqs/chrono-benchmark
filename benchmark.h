#pragma once
#include <chrono>

namespace bny {

	constexpr long double c_msfactor = 1000.0;

	typedef std::chrono::time_point<std::chrono::steady_clock> time_point_t;
	typedef long double ms_t;

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
		ms_t end();

		/// <summary>
		/// Get the ellapsed milliseconds
		/// </summary>
		/// <returns>ellapsed milliseconds</returns>
		ms_t get_ellapsed_time();

	private:
		time_point_t m_startTime;
		time_point_t m_endTime;
		ms_t m_ellapsedTime;

	};

}
