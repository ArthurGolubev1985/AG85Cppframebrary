
#pragma once
#ifndef AFC98PSC_1_HPP //AG19850316CppframebraryPartCoreLibraryCpp1998Demo1ProgramCommandlineconfiguration
#define AFC98PSC_1_HPP //AG19850316CppframebraryPartCoreLibraryCpp1998Demo1ProgramCommandlineconfiguration

#include <string>

namespace AG85 {

    namespace Cppframebrary{

        namespace CoreLibraryCpp1998Demo1{

            class ProgramCommandlineconfiguration {

            public:

                const std::string& GetDemoParameter1StringvalueRef()
                const
                {
                    return demoParameter1Stringvalue;
                }

                ProgramCommandlineconfiguration
                (
                    const std::string & cDemoParameterString
                )
                :demoParameter1Stringvalue(cDemoParameterString)
                {
                }

            private:

                const std::string demoParameter1Stringvalue;

            }; //class ProgramCommandlineconfiguration

        } //namespace CoreLibraryCpp1998Demo1

    } //namespace Cppframebrary

} //namespace AG85

#endif //AFC98PSC_1_HPP - AG19850316CppframebraryPartCoreLibraryCpp1998Demo1ProgramCommandlineconfiguration

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
// This file is a part of AG19850316 C++ Framebrary (ag85cppframebrary)
