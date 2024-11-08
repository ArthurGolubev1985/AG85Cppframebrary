
#pragma once
#ifndef A85FCLST_HPP //AG19850316Cppframebrary1PartCore1Commaonlibrary1Insecondstimer
#define A85FCLST_HPP //AG19850316Cppframebrary1PartCore1Commaonlibrary1Insecondstimer

#include <ctime>

#include "..//..//a85fcbc.hpp" //AG19850316Cppframebrary1PartCore1Applicationblank1Buildconfiguration

namespace AG85{

	namespace Cppframebrary1{

		namespace CppVersion1998{

			namespace Corelibrary1 {

				//Note:
				// empty calls are intended to be optimized out by a compiler, so that it costs nothing in run-time
				// Connectedreminding: keep the functions inline
				class Insecondstimer{
				public:

					//the helper for stopping insecondstimer in RAII manner
					class StartAndAutoStopGuard{
						Insecondstimer& insecondstimer;
					public:
						explicit StartAndAutoStopGuard(Insecondstimer& nTimer)
							: insecondstimer(nTimer)
						{
							insecondstimer.Start();
						}
						~StartAndAutoStopGuard()
						{
							insecondstimer.Stop();
						}
					};

					//the helper for auto resuming insecondstimer in RAII manner
					class PauseAndAutoResumeGuard{
						Insecondstimer& insecondstimer;
					public:
						explicit PauseAndAutoResumeGuard(Insecondstimer& nTimer)
							: insecondstimer(nTimer)
						{
							insecondstimer.Stop();
						}
						~PauseAndAutoResumeGuard() {
							insecondstimer.Start();
						}
					};

				public:
					Insecondstimer()
					: state(paused)
					{
				#ifndef AG19850316_1CPPGENERALLIBRARY_TIMER_DISABLED
						Reset();
				#endif
					}

					//continue paused insecondstimer
					void Start(){
				#ifndef AG19850316_1CPPGENERALLIBRARY_TIMER_DISABLED
						if (state != running){
							startStamp = time(NULL);
							state = running;
						}
				#endif
					}

					void Stop(){
				#ifndef AG19850316_1CPPGENERALLIBRARY_TIMER_DISABLED
						if (state == running){
							sum += (time(NULL) - startStamp);
							state = paused;
						}
				#endif
					}

					void Reset(){
				#ifndef AG19850316_1CPPGENERALLIBRARY_TIMER_DISABLED
						sum = 0;
						startStamp = time(NULL);
				#endif
					}

					time_t GetInsecondsinterval() const {
				#ifndef AG19850316_1CPPGENERALLIBRARY_TIMER_DISABLED

						if (state != paused){
							return sum + (time(NULL) - startStamp);
						} else {
							return sum;
						}
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

			} //namespace Corelibrary1

        } //namespace CppVersion1998

	} //namespace Cppframebrary1

} //namespace AG19850316

#endif //A85FCLST_HPP - AG19850316Cppframebrary1PartCore1Commaonlibrary1Insecondstimer

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
// The file is a part of AG19850316 C++ Framebrary 1 (ag85cppframebrary1)
