
#pragma once
#ifndef AFCLST98_1_HPP //AG19850316CppframebraryPartCorelibrary1InsecondstimerCpp1998
#define AFCLST98_1_HPP //AG19850316CppframebraryPartCorelibrary1InsecondstimerCpp1998

#include <ctime>

namespace AG85{

	namespace Cppframebrary{

		namespace Corelibrary1{

			namespace CppVersion1998{

				//Note:
				// empty functions are expected to be not called by a compiler
				//, so that it costs nothing in run-time if timering is set off
				//, so that funtions are empty by c++ defines.

				class Insecondstimer{
				public:

					//the helper for Pauseping insecondstimer in RAII manner
					class RunAndAutoPauseGuard{
						Insecondstimer& insecondstimer;
					public:
						explicit RunAndAutoPauseGuard(Insecondstimer& nTimer)
							: insecondstimer(nTimer)
						{
							insecondstimer.Run();
						}
						~RunAndAutoPauseGuard()
						{
							insecondstimer.Pause();
						}
					};

					//the helper for auto resuming insecondstimer in RAII manner
					class PauseAndAutoResumeGuard{
						Insecondstimer& insecondstimer;
					public:
						explicit PauseAndAutoResumeGuard(Insecondstimer& nTimer)
							: insecondstimer(nTimer)
						{
							insecondstimer.Pause();
						}
						~PauseAndAutoResumeGuard() {
							insecondstimer.Run();
						}
					};

				public:
					Insecondstimer()
					: state(paused)
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

					time_t GetInsecondsinterval() const {
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

					void operator= (const Insecondstimer & aInsecondstimer)
					{
						startStamp = aInsecondstimer.startStamp;
						sum = aInsecondstimer.sum;
						state = aInsecondstimer.state;
					}
					
				private:

					enum {paused, running} state;
				
					time_t startStamp;
				
					time_t sum;
					
				}; //Insecondstimer

			} //namespace CppVersion1998

        } //namespace Corelibrary1

	} //namespace Cppframebrary

} //namespace AG19850316

#endif //AFCLST98_1_HPP - AG19850316CppframebraryPartCorelibrary1InsecondstimerCpp1998

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
// This file is a part of AG19850316 C++ Framebrary (ag85cppframebrary)
