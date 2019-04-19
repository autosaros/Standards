Document Title:                 Supplementary material of the AUTOSAR XML Schema
Document Owner:                 AUTOSAR
Document Responsibility:        AUTOSAR
Document Identification Number: 649
Document Status:                Final
Part of AUTOSAR Standard:       Adaptive Platform
Part of Standard Release:       19-03
Date:                           2019-03-29

This archive contains the following files:

readme.txt
    This file

AUTOSAR_00047_COMPACT.xsd
    This AUXILIARY file provides a compacted AUTOSAR XML schema which is 
    optimized for performance. In particular the named groups are replaced
    by its contents. Also nested unnamed groups are optimized such that 
    an XML parser does not need to evaluate too many options.

AUTOSAR_00047_STRICT.xsd
    This AUXILIARY file provides a AUTOSAR XML schema which strictly follows
    the multiplicity in the meta-model. This may be used for more strict validation
    of the structures.

AUTOSAR_00047_STRICT_COMPACT.xsd
    This AUXILIARY file provides a compacted strict AUTOSAR XML schema which is 
    optimized for performance. In particular the named groups are replaced
    by its contents. Also nested unnamed groups are optimized such that 
    an XML parser does not need to evaluate too many options.

AUTOSAR_00047.css
    This AUXILIARY file provides an initial css stylesheet for visualization of 
    AUTOSAR XML files 

xml.xsd
    This is the schema for the xml namespace as provided by W3C.

The XSD and CSS files contained in AUTOSAR_TR_XMLSchemaSupplement.zip are             
auxiliary files, i.e. their usage is not enforced by AUTOSAR in any way.
