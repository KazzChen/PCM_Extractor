# PCM Extractor
> Platform: Qt 5.15.2

## V1.0.0
1. This program extract PCM code as a C array from the selected wave file, and the exported array name is same as the exported data file name.


## V1.0.1
1. Add a check box, to enable a convertor that converts data form from signed 16 bits to unsigned 12 bits 
    + PS: 16 bits data: Big-endian; 12 bits data: Big-endian
    + for example: [0x00, 0x00, 0xff, 0xff] as original data will be translated to :
        + [0x00, 0xf8, 0xff, 0xf7]

