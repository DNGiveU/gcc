
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_imageio_bmp_BMPEncoder__
#define __gnu_javax_imageio_bmp_BMPEncoder__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace imageio
      {
        namespace bmp
        {
            class BMPEncoder;
            class BMPFileHeader;
            class BMPInfoHeader;
        }
      }
    }
  }
  namespace javax
  {
    namespace imageio
    {
        class IIOImage;
        class ImageWriteParam;
      namespace metadata
      {
          class IIOMetadata;
      }
      namespace stream
      {
          class ImageOutputStream;
      }
    }
  }
}

class gnu::javax::imageio::bmp::BMPEncoder : public ::java::lang::Object
{

public:
  BMPEncoder();
  static ::gnu::javax::imageio::bmp::BMPEncoder * getEncoder(::gnu::javax::imageio::bmp::BMPFileHeader *, ::gnu::javax::imageio::bmp::BMPInfoHeader *);
  virtual void encode(::javax::imageio::stream::ImageOutputStream *, ::javax::imageio::metadata::IIOMetadata *, ::javax::imageio::IIOImage *, ::javax::imageio::ImageWriteParam *) = 0;
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_imageio_bmp_BMPEncoder__