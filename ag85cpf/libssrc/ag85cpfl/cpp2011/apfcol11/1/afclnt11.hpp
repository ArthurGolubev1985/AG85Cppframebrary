
#pragma once
#ifndef AFCLNT11_1_HPP //AG19850316CppframebraryPartCorelibrary1UptoinnanosecondsTimerCpp2011
#define AFCLNT11_1_HPP //AG19850316CppframebraryPartCorelibrary1UptoinnanosecondsTimerCpp2011

#include <chrono>

namespace AG85{
namespace Cppframebrary{
namespace Corelibrary1{
namespace CppVersion2011{

	//Note:
	// empty calls are intended to be optimized out by a compiler, so that it costs nothing in run-time
	// Connectedreminding: keep the functions inline
	class UptoinnanosecondsTimer{
	public:

		//the helper for pausing UptoinanosecondsTimer instance in RAII manner
		class RunAndAutoPauseGuard{
			UptoinnanosecondsTimer& uptoinnanosecondsTimerRef;
		public:
			explicit RunAndAutoPauseGuard(UptoinnanosecondsTimer& initUptoinnanosecondsTimerRef)
				: uptoinnanosecondsTimerRef(initUptoinnanosecondsTimerRef)
			{
				uptoinnanosecondsTimerRef.Run();
			}
			~RunAndAutoPauseGuard()
			{
				uptoinnanosecondsTimerRef.Pause();
			}
		};

		//the helper for auto resuming UptoinanosecondsTimer instance in RAII manner
		class PauseAndAutoResumeGuard{
			UptoinnanosecondsTimer& uptoinnanosecondsTimerRef;
		public:
			explicit PauseAndAutoResumeGuard(UptoinnanosecondsTimer& initUptoinnanosecondsTimerRef)
				: uptoinnanosecondsTimerRef(initUptoinnanosecondsTimerRef)
			{
				uptoinnanosecondsTimerRef.Pause();
			}
			~PauseAndAutoResumeGuard() {
				uptoinnanosecondsTimerRef.Run();
			}
		};

	public:
		UptoinnanosecondsTimer()
		: state(paused)
		{
	#ifndef AG19850316_AFCLNT11_1_TIMER_DISABLED
			Reset();
	#endif
		}

		//continue paused uptoinnanosecondstimer
		void Run(){
	#ifndef AG19850316_AFCLNT11_1_TIMER_DISABLED
			if (state != running){
				startStamp = std::chrono::high_resolution_clock::now();
				state = running;
			}
	#endif
		}

		void Pause(){
	#ifndef AG19850316_AFCLNT11_1_TIMER_DISABLED
			if (state == running){
				sum += (std::chrono::high_resolution_clock::now() - startStamp);
				state = paused;
			}
	#endif
		}

		void Reset(){
	#ifndef AG19850316_AFCLNT11_1_TIMER_DISABLED
			sum = std::chrono::high_resolution_clock::duration::zero();
			startStamp = std::chrono::high_resolution_clock::now();
	#endif
		}

		std::chrono::seconds GetInsecondsInterval() const {
	#ifndef AG19850316_AFCLNT11_1_TIMER_DISABLED
		if (state == paused){
			return std::chrono::duration_cast<std::chrono::seconds>(sum);
		} else {
			return std::chrono::duration_cast<std::chrono::seconds>
				(sum + (std::chrono::high_resolution_clock::now() - startStamp));
		}
	#else
		return 0;
	#endif
		}

		std::chrono::milliseconds GetInmillisecondsInterval() const {
	#ifndef AG19850316_AFCLNT11_1_TIMER_DISABLED
		if (state == paused){
			return std::chrono::duration_cast<std::chrono::milliseconds>(sum);
		} else {
			return std::chrono::duration_cast<std::chrono::milliseconds>
				(sum + (std::chrono::high_resolution_clock::now() - startStamp));
		}
	#else
		return 0;
	#endif
		}

		std::chrono::microseconds GetInmicrosecondsInterval() const {
	#ifndef AG19850316_AFCLNT11_1_TIMER_DISABLED
		if (state == paused){
			return std::chrono::duration_cast<std::chrono::microseconds>(sum);
		} else {
			return std::chrono::duration_cast<std::chrono::microseconds>
				(sum + (std::chrono::high_resolution_clock::now() - startStamp));
		}
	#else
		return 0;
	#endif
		}

		std::chrono::nanoseconds GetInnanosecondsInterval() const {
	#ifndef AG19850316_AFCLNT11_1_TIMER_DISABLED
		if (state == paused){
			return std::chrono::duration_cast<std::chrono::nanoseconds>(sum);
		} else {
			return std::chrono::duration_cast<std::chrono::nanoseconds>
				(sum + (std::chrono::high_resolution_clock::now() - startStamp));
		}
	#else
		return 0;
	#endif
		}

		void operator= (const UptoinnanosecondsTimer & aUptoinnanosecondsTimer)
		{
			startStamp = aUptoinnanosecondsTimer.startStamp;
			sum = aUptoinnanosecondsTimer.sum;
			state = aUptoinnanosecondsTimer.state;
		}
		
	private:

		enum {paused, running} state;

		std::chrono::high_resolution_clock::time_point startStamp;
		
		std::chrono::high_resolution_clock::duration sum;
		
	}; //class UptoinnanosecondsTimer

} //namespace CppVersion2011
} //namespace Corelibrary1
} //namespace Cppframebrary
} //namespace AG19850316

#endif //AFCLNT11_1_HPP - AG19850316CppframebraryPartCorelibrary1UptoinnanosecondsTimerCpp2011

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
// This file is a part of AG19850316 C++ Framebrary (ag85cppframebrary)
