
#pragma once
#ifndef AFCLST98_1_HPP //AG19850316CppframebraryPartCorelibrary1InsecondsTimerCpp1998
#define AFCLST98_1_HPP //AG19850316CppframebraryPartCorelibrary1InsecondsTimerCpp1998

#include <ctime>

namespace AG85{
namespace Cppframebrary{
namespace Corelibrary1{
namespace CppVersion1998{

//Note:
// empty functions are expected to be not called by a compiler
//, so that it costs nothing in run-time if timering is set off
//, so that funtions are empty by c++ defines.

	class InsecondsTimer{
	public:

		//the helper for Pauseping insecondstimer in RAII manner
		class RunAndAutoPauseGuard{
			InsecondsTimer& insecondsTimerRef;
		public:
			explicit RunAndAutoPauseGuard(InsecondsTimer& initInsecondsTimerRef)
				: insecondsTimerRef(initInsecondsTimerRef)
			{
				insecondsTimerRef.Run();
			}
			~RunAndAutoPauseGuard()
			{
				insecondsTimerRef.Pause();
			}
		};

		//the helper for auto resuming insecondstimer in RAII manner
		class PauseAndAutoResumeGuard{
			InsecondsTimer& insecondsTimerRef;
		public:
			explicit PauseAndAutoResumeGuard(InsecondsTimer& initInsecondsTimerRef)
				: insecondsTimerRef(initInsecondsTimerRef)
			{
				insecondsTimerRef.Pause();
			}
			~PauseAndAutoResumeGuard() {
				insecondsTimerRef.Run();
			}
		};

	public:
		InsecondsTimer()
			:state(paused)
		{
	#ifndef AG19850316_AFCLST98_1_TIMER_DISABLED
			Reset();
	#endif
		}

		//continue paused insecondstimer
		void Run(){
	#ifndef AG19850316_AFCLST98_1_TIMER_DISABLED
			if (state != running){
				startStamp = time(NULL);
				state = running;
			}
	#endif
		}

		void Pause(){
	#ifndef AG19850316_AFCLST98_1_TIMER_DISABLED
			if (state == running){
				sum += (time(NULL) - startStamp);
				state = paused;
			}
	#endif
		}

		void Reset(){
	#ifndef AG19850316_AFCLST98_1_TIMER_DISABLED
			sum = 0;
			startStamp = time(NULL);
	#endif
		}

		time_t GetInsecondsInterval() const {
	#ifndef AG19850316_AFCLST98_1_TIMER_DISABLED
			if (state != paused){
				return sum + (time(NULL) - startStamp);
			} else {
				return sum;
			}
	#else
			return 0;
	#endif
		}

		void operator= (const InsecondsTimer & aInsecondsTimer)
		{
			startStamp = aInsecondsTimer.startStamp;
			sum = aInsecondsTimer.sum;
			state = aInsecondsTimer.state;
		}
		
	private:

		enum {paused, running} state;

		time_t startStamp;

		time_t sum;
		
	}; //class InsecondsTimer

} //namespace CppVersion1998
} //namespace Corelibrary1
} //namespace Cppframebrary
} //namespace AG19850316

#endif //AFCLST98_1_HPP - AG19850316CppframebraryPartCorelibrary1InsecondsTimerCpp1998

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
// This file is a part of AG19850316 C++ Framebrary (ag85cppframebrary)
