/*=========================================================================

  Library   : Image Registration Toolkit (IRTK)
  Module    : $Id: irtkImageHomogeneousTransformation.h 849 2013-05-10 01:35:45Z as12312 $
  Copyright : Imperial College, Department of Computing
              Visual Information Processing (VIP), 2008 onwards
  Date      : $Date: 2013-05-10 02:35:45 +0100 (Fri, 10 May 2013) $
  Version   : $Revision: 849 $
  Changes   : $Author: as12312 $

=========================================================================*/

#ifndef _IRTKHOMOGENEOUSIMAGETRANSFORMATION_H

#define _IRTKHOMOGENEOUSIMAGETRANSFORMATION_H

#include <irtkTransformation.h>

class irtkImageHomogeneousTransformation  : public irtkImageTransformation
{

public:

  /** Constructor. This constructs an transformation filter with a given
   *  interpolation mode and padding value. By default the interpolation
   *  mode is set to trilinear.
   */
  irtkImageHomogeneousTransformation();

  /// Destructor
  virtual ~irtkImageHomogeneousTransformation();

  /// Sets transformation
  virtual void SetTransformation(irtkTransformation *);

  /// Runs the filter
  virtual void Run();

};

#endif
