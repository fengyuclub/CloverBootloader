/*
 * include/syslinux_mbr.h
 * MBR boot code
 *
 * The boot code in this file was taken from syslinux-3.11. It is covered
 * by the following license:
 *
 ; -----------------------------------------------------------------------
 ;   
 ;   Copyright 2003-2004 H. Peter Anvin - All Rights Reserved
 ;
 ;   Permission is hereby granted, free of charge, to any person
 ;   obtaining a copy of this software and associated documentation
 ;   files (the "Software"), to deal in the Software without
 ;   restriction, including without limitation the rights to use,
 ;   copy, modify, merge, publish, distribute, sublicense, and/or
 ;   sell copies of the Software, and to permit persons to whom
 ;   the Software is furnished to do so, subject to the following
 ;   conditions:
 ;   
 ;   The above copyright notice and this permission notice shall
 ;   be included in all copies or substantial portions of the Software.
 ;   
 ;   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 ;   EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 ;   OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 ;   NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 ;   HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 ;   WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 ;   FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 ;   OTHER DEALINGS IN THE SOFTWARE.
 ;
 ; -----------------------------------------------------------------------
 *
 */

#ifndef __SYSLINUX_MBR_H__
#define __SYSLINUX_MBR_H__


#define MBR_BOOTCODE_SIZE (440)


#define SYSLINUX_MBR_SIZE (304)

static UINT8 syslinux_mbr[SYSLINUX_MBR_SIZE] = {
    0xfa, 0x31, 0xc0, 0x8e, 0xd8, 0x8e, 0xc0, 0x8e,
    0xd0, 0xbc, 0x00, 0x7c, 0xfb, 0xfc, 0x89, 0xe6,
    0xbf, 0x00, 0x06, 0xb9, 0x00, 0x01, 0xf3, 0xa5,
    0xea, 0x1d, 0x06, 0x00, 0x00, 0x88, 0x16, 0x00,
    0x08, 0xb4, 0x08, 0xcd, 0x13, 0x31, 0xc0, 0x88,
    0xf0, 0x40, 0xa3, 0xf0, 0x06, 0x80, 0xe1, 0x3f,
    0x88, 0x0e, 0xf2, 0x06, 0xbe, 0xbe, 0x07, 0x31,
    0xc0, 0xb9, 0x04, 0x00, 0xf6, 0x04, 0x80, 0x74,
    0x03, 0x40, 0x89, 0xf7, 0x83, 0xc6, 0x10, 0xe2,
    0xf3, 0x83, 0xf8, 0x01, 0x75, 0x73, 0x8a, 0x16,
    0x00, 0x08, 0xb8, 0x00, 0x41, 0xbb, 0xaa, 0x55,
    0x31, 0xc9, 0x30, 0xf6, 0xf9, 0xcd, 0x13, 0x72,
    0x23, 0x81, 0xfb, 0x55, 0xaa, 0x75, 0x1d, 0xf6,
    0xc1, 0x01, 0x74, 0x18, 0x57, 0xbe, 0xe0, 0x06,
    0x8b, 0x5d, 0x08, 0x89, 0x5c, 0x08, 0x8b, 0x5d,
    0x0a, 0x89, 0x5c, 0x0a, 0x8a, 0x16, 0x00, 0x08,
    0xb4, 0x42, 0xeb, 0x2a, 0x57, 0x8b, 0x45, 0x08,
    0x8b, 0x55, 0x0a, 0xf7, 0x36, 0xf2, 0x06, 0x42,
    0x89, 0xd1, 0x31, 0xd2, 0xf7, 0x36, 0xf0, 0x06,
    0x88, 0xc5, 0xd1, 0xe8, 0xd1, 0xe8, 0x24, 0xc0,
    0x08, 0xc1, 0x88, 0xd6, 0x8a, 0x16, 0x00, 0x08,
    0xbb, 0x00, 0x7c, 0xb8, 0x01, 0x02, 0xcd, 0x13,
    0x72, 0x16, 0x5e, 0x81, 0x3e, 0xfe, 0x7d, 0x55,
    0xaa, 0x75, 0x08, 0xfa, 0xea, 0x00, 0x7c, 0x00,
    0x00, 0x77, 0x05, 0xbe, 0xf4, 0x06, 0xeb, 0x03,
    0xbe, 0x0f, 0x07, 0xac, 0x20, 0xc0, 0x74, 0x0c,
    0xb4, 0x0e, 0x8a, 0x3e, 0x62, 0x04, 0xb3, 0x07,
    0xcd, 0x10, 0xeb, 0xef, 0xeb, 0xfe, 0x00, 0x00,
    0x10, 0x00, 0x01, 0x00, 0x00, 0x7c, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x4d, 0x69, 0x73, 0x73,
    0x69, 0x6e, 0x67, 0x20, 0x6f, 0x70, 0x65, 0x72,
    0x61, 0x74, 0x69, 0x6e, 0x67, 0x20, 0x73, 0x79,
    0x73, 0x74, 0x65, 0x6d, 0x0d, 0x0a, 0x00, 0x4f,
    0x70, 0x65, 0x72, 0x61, 0x74, 0x69, 0x6e, 0x67,
    0x20, 0x73, 0x79, 0x73, 0x74, 0x65, 0x6d, 0x20,
    0x6c, 0x6f, 0x61, 0x64, 0x69, 0x6e, 0x67, 0x20,
    0x65, 0x72, 0x72, 0x6f, 0x72, 0x0d, 0x0a, 0x00
};


#endif /* __SYSLINUX_MBR_H__ */

/* EOF */
