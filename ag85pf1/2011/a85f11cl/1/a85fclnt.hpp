
#pragma once
#ifndef A85FCLNT_HPP //AG19850316Cppframebrary1Part2011Corelibrary1Uptonanosecondstimer
#define A85FCLNT_HPP //AG19850316Cppframebrary1Part2011Corelibrary1Uptonanosecondstimer

#include <chrono>

namespace AG85{

	namespace Cppframebrary1{

		namespace CppVersion2011{

			namespace Corelibrary1 {

				//Note:
				// empty calls are intended to be optimized out by a compiler, so that it costs nothing in run-time
				// Connectedreminding: keep the functions inline
				class Uptonanosecondstimer{
				public:

					//the helper for stopping insecondstimer in RAII manner
					class StartAndAutoStopGuard{
						Uptonanosecondstimer& insecondstimer;
					public:
						explicit StartAndAutoStopGuard(Uptonanosecondstimer& nTimer)
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
						Uptonanosecondstimer& insecondstimer;
					public:
						explicit PauseAndAutoResumeGuard(Uptonanosecondstimer& nTimer)
							: insecondstimer(nTimer)
						{
							insecondstimer.Stop();
						}
						~PauseAndAutoResumeGuard() {
							insecondstimer.Start();
						}
					};

				public:
					Uptonanosecondstimer()
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
							startStamp = std::chrono::high_resolution_clock::now();
							state = running;
						}
				#endif
					}

					void Stop(){
				#ifndef AG19850316_1CPPGENERALLIBRARY_TIMER_DISABLED
						if (state == running){
							sum += (std::chrono::high_resolution_clock::now() - startStamp);
							state = paused;
						}
				#endif
					}

					void Reset(){
				#ifndef AG19850316_1CPPGENERALLIBRARY_TIMER_DISABLED
						sum = std::chrono::high_resolution_clock::duration::zero();
						startStamp = std::chrono::high_resolution_clock::now();
				#endif
					}

					std::chrono::seconds GetInsecondsinterval() const {
				#ifndef AG19850316_1CPPGENERALLIBRARY_TIMER_DISABLED
					if (state == paused){
						return std::chrono::duration_cast<std::chrono::seconds>(sum);
					} else {
						return std::chrono::duration_cast<std::chrono::seconds>
							(sum + (std::chrono::high_resolution_clock::now() - startStamp));
					}
				#endif
					}

					std::chrono::milliseconds GetInmillisecondsinterval() const {
				#ifndef AG19850316_1CPPGENERALLIBRARY_TIMER_DISABLED
					if (state == paused){
						return std::chrono::duration_cast<std::chrono::milliseconds>(sum);
					} else {
						return std::chrono::duration_cast<std::chrono::milliseconds>
							(sum + (std::chrono::high_resolution_clock::now() - startStamp));
					}
				#endif
					}

					std::chrono::microseconds GetInmicrosecondsinterval() const {
				#ifndef AG19850316_1CPPGENERALLIBRARY_TIMER_DISABLED
					if (state == paused){
						return std::chrono::duration_cast<std::chrono::microseconds>(sum);
					} else {
						return std::chrono::duration_cast<std::chrono::microseconds>
							(sum + (std::chrono::high_resolution_clock::now() - startStamp));
					}
				#endif
					}

					std::chrono::nanoseconds GetInnanosecondsinterval() const {
				#ifndef AG19850316_1CPPGENERALLIBRARY_TIMER_DISABLED
					if (state == paused){
						return std::chrono::duration_cast<std::chrono::nanoseconds>(sum);
					} else {
						return std::chrono::duration_cast<std::chrono::nanoseconds>
							(sum + (std::chrono::high_resolution_clock::now() - startStamp));
					}
				#endif
					}

					void operator= (const Uptonanosecondstimer & aInsecondstimer)
					{
						startStamp = aInsecondstimer.startStamp;
						sum = aInsecondstimer.sum;
						state = aInsecondstimer.state;
					}
					
				private:

					enum {paused, running} state;

					std::chrono::high_resolution_clock::time_point startStamp;
					
					std::chrono::high_resolution_clock::duration sum;
					
				}; //Uptoinnanosecondstimer

			} //namespace CppVersion2011

        } //namespace Corelibrary1

	} //namespace Cppframebrary1

} //namespace AG19850316

#endif //A85FCLNT_HPP - AG19850316Cppframebrary1Part2011Corelibrary1Uptonanosecondstimer

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
