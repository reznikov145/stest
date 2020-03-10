/**
*   \brief	Interface for rank library
*   \file	rank.h
*   \version	1.0
*   \copyright
*
*	purpose functions for filling the array and calculate its amount with set accurace
*/

#pragma once
#include <cstddef>
#if defined(rank_STATIC_DEFINE) || defined(rank_DLL_EXPORTALL)
#  define RANK_EXPORT
#  define RANK_NO_EXPORT
#else
# ifdef _WIN32
#  ifndef RANK_EXPORT
#    ifdef rank_EXPORTS
/* We are building this library */
#      define RANK_EXPORT __declspec(dllexport)
#    else
/* We are using this library */
#      define RANK_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef RANK_NO_EXPORT
#    define RANK_NO_EXPORT 
#  endif
# else //_WIN32 -> other
#  ifndef RANK_EXPORT
#    ifdef rank_EXPORTS
/* We are building this library */
#      define RANK_EXPORT __attribute__((visibility("default")))
#    else
/* We are using this library */
#      define RANK_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef RANK_NO_EXPORT
#    define RANK_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
# endif // _WIN32
#endif

/**
* @interface   rank
* @brief  represent the calculation of the amount of the sequence.
*/

/*! \addtogroup rank
*  library rank
*  @{
*/

/** \fn double numeric(int i);
*  \brief calculation of elements of range.
*
*  \param[in] i number of elements.
*
*  \return element of the sequence
*/

RANK_EXPORT float numeric(int i);




/** \fn double sum(double arg[], double e);
*  \brief calculation of amount of the sequence.
*
*  \param[in] e is a precision of calculations.
*  \param[in] arg is a sequence
*
*  \return sum of the sequence
*/

RANK_EXPORT float sum(float e, int *el, float *arg);

/*! @} */