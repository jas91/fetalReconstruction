/*=========================================================================

  Library   : Image Registration Toolkit (IRTK)
  Module    : $Id: irtkConvolutionWithPadding_2D.h 235 2010-10-18 09:25:20Z dr $
  Copyright : Imperial College, Department of Computing
              Visual Information Processing (VIP), 2008 onwards
  Date      : $Date: 2010-10-18 10:25:20 +0100 (Mon, 18 Oct 2010) $
  Version   : $Revision: 235 $
  Changes   : $Author: dr $

=========================================================================*/

#ifndef _IRTKCONVOLUTIONWITHPADDING_2D_H

#define _IRTKCONVOLUTIONWITHPADDING_2D_H

/**
 * Class for two-dimensional convolution of padded images.
 *
 * This class defines and implements two-dimensional convolutions of a padded
 * image with a filter kernel. The convolution is computed along the x- and
 * y-axis. This class assumes that the filter kernel is two-dimensional and
 * its size along the z-axis must be 1. The filter ignores any padded values
 * in the image.
 */

template <class VoxelType> class irtkConvolutionWithPadding_2D : public irtkConvolution_2D<VoxelType>
{

protected:

  /** Padding value. The padding value defines which voxels are ignored
   *  during the calculation of the convolution. All voxels whose value
   *  is smaller or equal to the padding value are ignored.
   */
  VoxelType _padding;

  /// Returns the name of the class
  virtual const char *NameOfClass();

  /** Run the convolution filter. This method is protected and should only
   *  be called from within public member function Run(). This method also
   *  overrides the member function Run() of the base class and ignores any
   *  padded values during the convolution. If more than 50\% of the voxels
   *  are padded, it returns the padding value, otherwise it returns the
   *  result of the convolution.
   */
  virtual double Run(int, int, int, int);

public:

  /// Constructor
  irtkConvolutionWithPadding_2D(VoxelType, bool = false);

  /// Put the padding value
  void      PutPaddingValue(VoxelType);

  /// Get the padding value
  VoxelType GetPaddingValue();
};

#endif
