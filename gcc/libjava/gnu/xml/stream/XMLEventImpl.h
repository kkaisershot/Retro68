
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_stream_XMLEventImpl__
#define __gnu_xml_stream_XMLEventImpl__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace stream
      {
          class XMLEventImpl;
      }
    }
  }
  namespace javax
  {
    namespace xml
    {
      namespace namespace$
      {
          class QName;
      }
      namespace stream
      {
          class Location;
        namespace events
        {
            class Characters;
            class EndElement;
            class StartElement;
        }
      }
    }
  }
}

class gnu::xml::stream::XMLEventImpl : public ::java::lang::Object
{

public: // actually protected
  XMLEventImpl(::javax::xml::stream::Location *);
public:
  virtual jint getEventType() = 0;
  virtual ::javax::xml::stream::Location * getLocation();
  virtual jboolean isStartElement();
  virtual jboolean isAttribute();
  virtual jboolean isNamespace();
  virtual jboolean isEndElement();
  virtual jboolean isEntityReference();
  virtual jboolean isProcessingInstruction();
  virtual jboolean isCharacters();
  virtual jboolean isStartDocument();
  virtual jboolean isEndDocument();
  virtual ::javax::xml::stream::events::StartElement * asStartElement();
  virtual ::javax::xml::stream::events::EndElement * asEndElement();
  virtual ::javax::xml::stream::events::Characters * asCharacters();
  virtual ::javax::xml::namespace$::QName * getSchemaType();
  virtual void writeAsEncodedUnicode(::java::io::Writer *) = 0;
public: // actually protected
  virtual ::java::lang::String * encode(::java::lang::String *, jboolean);
  ::javax::xml::stream::Location * __attribute__((aligned(__alignof__( ::java::lang::Object)))) location;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_stream_XMLEventImpl__