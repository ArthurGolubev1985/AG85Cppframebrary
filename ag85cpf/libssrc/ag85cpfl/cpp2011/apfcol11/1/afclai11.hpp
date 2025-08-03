
#pragma once
#ifndef AFCAII11_1_HPP //AG19850316CppframebraryPartCorelibrary1AtomicIncrementalIdsGeneratorCpp2011
#define AFCAII11_1_HPP //AG19850316CppframebraryPartCorelibrary1AtomicIncrementalIdsGeneratorCpp2011

#include <atomic>

namespace AG85{
namespace Cppframebrary{
namespace Corelibrary1{
namespace CppVersion2011{

    template <typename IdsType>
    class AtomicIncrementalIdsGenerator{
    
    public:

        AtomicIncrementalIdsGenerator(IdsType prestartingValue)
            :atomicIncrementalIdsGenerator(prestartingValue)
        {}

        unsigned int GetNextId(){
            return ++atomicIncrementalIdsGenerator;
        }
        
    private:
    
        std::atomic<IdsType> atomicIncrementalIdsGenerator;

    }; //class Incrementalidentificatorsgenerator

} //namespace Corelibrary1
} //namespace CppVersion2011
} //namespace Cppframebrary
} //namespace AG19850316

#endif //AFCAII11_1_HPP - AG19850316CppframebraryPartCorelibrary1AtomicIncrementalIdsGeneratorCpp2011

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
// This file is a part of AG19850316 C++ Framebrary (ag85cppframebrary)
