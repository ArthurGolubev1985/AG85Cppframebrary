
#pragma once
#ifndef AFCLNT11_1_HPP //AG19850316CppframebraryPartCorelibrary1UptoinnanosecondstimerCpp2011
#define AFCLNT11_1_HPP //AG19850316CppframebraryPartCorelibrary1UptoinnanosecondstimerCpp2011

#include <chrono>

namespace AG85{

	namespace Cppframebrary{

		namespace Corelibrary1{

			namespace CppVersion2011{

				//Note:
				// empty calls are intended to be optimized out by a compiler, so that it costs nothing in run-time
				// Connectedreminding: keep the functions inline
				class Uptoinnanosecondstimer{
				public:

					//the helper for Pauseping insecondstimer in RAII manner
					class RunAndAutoPauseGuard{
						Uptoinnanosecondstimer& insecondstimer;
					public:
						explicit RunAndAutoPauseGuard(Uptoinnanosecondstimer& nTimer)
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
						Uptoinnanosecondstimer& insecondstimer;
					public:
						explicit PauseAndAutoResumeGuard(Uptoinnanosecondstimer& nTimer)
							: insecondstimer(nTimer)
						{
							insecondstimer.Pause();
						}
						~PauseAndAutoResumeGuard() {
							insecondstimer.Run();
						}
					};

				public:
					Uptoinnanosecondstimer()
					: state(paused)
					{
				#ifndef AG19850316_AFCLNT11_1_TIMER_DISABLED
						Reset();
				#endif
					}

					//continue paused insecondstimer
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

					std::chrono::seconds GetInsecondsinterval() const {
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

					std::chrono::milliseconds GetInmillisecondsinterval() const {
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

					std::chrono::microseconds GetInmicrosecondsinterval() const {
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

					std::chrono::nanoseconds GetInnanosecondsinterval() const {
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

					void operator= (const Uptoinnanosecondstimer & aInsecondstimer)
					{
						startStamp = aInsecondstimer.startStamp;
						sum = aInsecondstimer.sum;
						state = aInsecondstimer.state;
					}
					
				private:

					enum {paused, running} state;

					std::chrono::high_resolution_clock::time_point startStamp;
					
					std::chrono::high_resolution_clock::duration sum;
					
				}; //class Uptoinnanosecondstimer

			} //namespace CppVersion2011

        } //namespace Corelibrary1

	} //namespace Cppframebrary

} //namespace AG19850316

#endif //AFCLNT11_1_HPP - AG19850316CppframebraryPartCorelibrary1UptoinnanosecondstimerCpp2011

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
// This file is a part of AG19850316 C++ Framebrary (ag85cppframebrary)
