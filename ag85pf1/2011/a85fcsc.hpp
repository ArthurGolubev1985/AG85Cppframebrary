
#pragma once
#ifndef A85FCSC_HPP //AG19850316Cppframebrary1Part2011Core1Applicationblank1Applicationstaticconfiguration
#define A85FCSC_HPP //AG19850316Cppframebrary1Part2011Core1Applicationblank1Applicationstaticconfiguration

#include <string>

namespace AG85{

	namespace Cppframebrary1{

		namespace CppVersion2011{

			namespace Application{

				namespace StaticConfiguration{

					static const char APPLICATION_NAME[] = "AG85Cpp2011framebrary1Core1Apllicationblank";
					enum { APPLICATION_VERSION = 1 };

					constexpr unsigned int MinNumberOfProcessingThreads = 1;
					constexpr unsigned int MaxNumberOfProcessingThreads = 256;

				}; //class StaticConfiguration

			} //namespace Application

		} //namespace CppVersion2011

	} //namespace Cppframebrary1

} //namespace AG19850316

#endif //A85FCSC_HPP - AG19850316Cppframebrary1Part2011Core1Applicationblank1Applicationstaticconfiguration

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
