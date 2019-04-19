Document Title:                 Application Interface Examples
Document Owner:                 AUTOSAR
Document Responsibility:        AUTOSAR
Document Identification Number: 638
Document Status:                Final
Part of AUTOSAR Standard:       Classic Platform
Part of Standard Release:       4.4.0
Date:                           2018-10-31



This archive contains the examples that are used to discuss the Application
Interface model elements defined within the AUTOSAR standardization work.
In particular, it contains example Software Compositions that show the context
and/or application of the Port Prototype Blueprints defined in the AUTOSAR Standard.

Furthermore, it contains an AUTOSAR catalog file: AUTOSAR_CC_AISpecificationExamples.xml
This file helps AUTOSAR tools to resolve the references within the examples if the files
are unpacked as described below.

Images repository has been added to resolve images references into examples (PortPrototypes)

Additional external files are required to resolve all references within this
file: AUTOSAR_MOD_AISpecification.zip, AUTOSAR_MOD_GeneralDefinitions.zip
How to use:
1) Obtain AUTOSAR_MOD_AISpecificationExamples.zip, AUTOSAR_MOD_AISpecification.zip, AUTOSAR_MOD_GeneralDefinitions.zip
   and store in _one_ common folder
2) Unzip all three files, using the "unzip to <filename>" option, resulting in the following folder structure:
   ./
   -> AUTOSAR_MOD_AISpecificationExamples/
   -> AUTOSAR_MOD_AISpecification/
   -> AUTOSAR_MOD_GeneralDefinitions/
3) The catalog file will support AUTOSAR tools to resolve the references. If you want to use a different file layout,
   you have to adapt the catalog file accordingly.


NOTE: The short name pattern of Blueprints is still serialized the obsolete way as <SHORT-NAME-PATTERN>{anyName}</SHORT-NAME-PATTERN>. 
This is for compatibility to all tools based on older versions of Artop.

+----------+-------+--------------------------+------------------------------------------+
|Date      |Release|Changed by                |Change Description                        |
+----------+-------+--------------------------+------------------------------------------+
|2018-10-31| 4.4.0 |AUTOSAR Release Management| * Add new ASAM Units support             |
+----------+-------+--------------------------+------------------------------------------+
|2017-12-08| 4.3.1 |AUTOSAR Release Management| * Editorial changes                      |
+----------+-------+--------------------------+------------------------------------------+
|2016-11-30| 4.3.0 |AUTOSAR Release Management| * New TRSM Domain contents               |
|          |       |                          |   implementation                         |
|          |       |                          | * Naming rules harmonization             |
|          |       |                          | * Minor bugs fixed                       |
|          |       |                          |                                          |
+----------+-------+--------------------------+------------------------------------------+
