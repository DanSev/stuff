import os
import ycm_core

flags = [
  '-Wall',
  '-Wextra',
  '-Werror',
  '-Wno-long-long',
  '-Wno-variadic-macros',
  '-fexceptions',
  '-ferror-limit=10000',
  '-DNDEBUG',
  '-std=c99',
  '-xc',
  ]

SOURCE_EXTENSIONS = [ '.cpp', '.cxx', '.cc', '.c', ]

def IsHeaderFile( filename ):
  extension = os.path.splitext( filename )[ 1 ]
  return extension in [ '.h', '.hxx', '.hpp', '.hh' ]


def FlagsForFile( filename, **kwargs ):
  return {
  'flags': flags,
  'do_cache': True
  }
