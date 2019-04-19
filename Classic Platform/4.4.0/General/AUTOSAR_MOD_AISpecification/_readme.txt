Document Title:                 XML Specification of Application Interfaces
Document Owner:                 AUTOSAR
Document Responsibility:        AUTOSAR
Document Identification Number: 443
Document Status:                Final
Part of AUTOSAR Standard:       Classic Platform
Part of Standard Release:       4.4.0
Date:                           2018-10-31



This folder contains ARXML files that hold one type of model element (e.g. units) and 
only one category. Therefore, the files depend on other files by references, e.g. Units 
reference PhysicalDimensions.
The life cycle information AUTOSAR_MOD_AISpecification_*_LifeCycle_Standard.arxml needs always 
to be considered, as it is the only source to know whether a model element is valid and part 
of the release.
The folder comprises the following files:
		
	AI specification ARXML files
	============================
	AUTOSAR_MOD_AISpecification_KeywordSet_Blueprint.arxml
	AUTOSAR_MOD_AISpecification_Keyword_LifeCycle_Standard.arxml
	AUTOSAR_MOD_AISpecification_PhysicalDimension_Standard.arxml
	AUTOSAR_MOD_AISpecification_PhysicalDimension_LifeCycle_Standard.arxml
	AUTOSAR_MOD_AISpecification_Unit_Standard.arxml
	AUTOSAR_MOD_AISpecification_Unit_LifeCycle_Standard.arxml
	AUTOSAR_MOD_AISpecification_DataConstr_Blueprint.arxml
	AUTOSAR_MOD_AISpecification_DataConstr_LifeCycle_Standard.arxml
	AUTOSAR_MOD_AISpecification_Collection_AIMC_Keyword_Blueprint.arxml
	AUTOSAR_MOD_AISpecification_CompuMethod_Blueprint.arxml
	AUTOSAR_MOD_AISpecification_CompuMethod_LifeCycle_Standard.arxml
	AUTOSAR_MOD_AISpecification_ApplicationDataType_Blueprint.arxml
	AUTOSAR_MOD_AISpecification_ApplicationDataType_LifeCycle_Standard.arxml
	AUTOSAR_MOD_AISpecification_PortInterface_Blueprint.arxml
	AUTOSAR_MOD_AISpecification_PortInterface_LifeCycle_Standard.arxml
	AUTOSAR_MOD_AISpecification_PortPrototypeBlueprint_Blueprint.arxml
	AUTOSAR_MOD_AISpecification_PortPrototypeBlueprint_LifeCycle_Standard.arxml
	AUTOSAR_MOD_AISpecification_Collection_Body_Blueprint.arxml
	AUTOSAR_MOD_AISpecification_Collection_Pt_Blueprint.arxml
	AUTOSAR_MOD_AISpecification_Collection_Chassis_Blueprint.arxml
	AUTOSAR_MOD_AISpecification_Collection_OccptPedSfty_Blueprint.arxml
	AUTOSAR_MOD_AISpecification_Collection_MmedTelmHmi_Blueprint.arxml
	
	AUTOSAR catalog files
	=====================
	AUTOSAR_CC_AISpecification.xml (AUTOSAR catalog file - explanation see below)
	catalog_V3_0_0.ml.xsd (XML schema file for AUTOSAR catalog file)
	xml.xsd (basic W3C XML schema file used by AUTOSAR catalog file)

  Images (Specific set of jpg files, referenced by arxml files (PortprotoypeBlueprints)
  =====================
  Detailed_signal_content_of_Torque_at_Clutch_Signals.jpg
  Transmission_Accuracy_Timing_Requirements_Torque_Signals.jpg
  Transmission_Requirement_for_Engine_Response_to_TrsmTqCluFast_Torque_Decrease_Request.jpg
  Transmission_Requirement_for_Engine_Response_to_TrsmTqCluFast_Torque_Increase_Request.jpg
  Transmission_Requirement_for_Engine_Response_to_TrsmTqCluMaxProtn_Gearbox_Protection.jpg
  Transmission_Requirement_for_Engine_Response_to_TrsmTqCluResv_Torque_Reserve_Torque_Decrease_Request.jpg
  Transmission_Requirement_for_Engine_Response_to_TrsmTqCluResv_Torque_Reserve_Torque_Increase_Request.jpg      

  
An additional external file is required to resolve references to lifecycle information: AUTOSAR_MOD_GeneralDefinitions.zip

How to use:
1) Obtain AUTOSAR_MOD_AISpecification.zip, AUTOSAR_MOD_GeneralDefinitions.zip
   and store in _one_ common folder
2) Unzip the files, using the "unzip to <filename>" option, resulting in the following folder structure:
   ./
   -> AUTOSAR_MOD_AISpecification/
   -> AUTOSAR_MOD_GeneralDefinitions/
3) The catalog file will support AUTOSAR tools to resolve the references. If you want to use a different file layout,
   you have to adapt the catalog file accordingly.
	

For further aspects of the AUTOSAR AI specification, please check out AUTOSAR_MOD_AISpecificationExamples.zip (auxiliary).

NOTE: The short name pattern of Blueprints is still serialized the obsolete way as <SHORT-NAME-PATTERN>{anyName}</SHORT-NAME-PATTERN>. 
This is for compatibility to all tools based on older versions of Artop.

Please find further details for the inclusion rules below:
    AUTOSAR_MOD_AISpecification_KeywordSet_Blueprint.arxml
    ->  Includes  KeywordSet_Blueprint
        To use it: 
        - Load AUTOSAR_MOD_GeneralDefinition_LifeCycle.arxml
        - Load AUTOSAR_MOD_AISpecification_Keyword_LifeCycle_Standard.arxml

    AUTOSAR_MOD_AISpecification_PhysicalDimension_Standard.arxml
    ->  Includes PhysicalDimensions
        To use it: 
        - Load AUTOSAR_MOD_AISpecification_KeywordSet_Blueprint.arxml
        - Load AUTOSAR_MOD_GeneralDefinition_LifeCycle.arxml
        - Load AUTOSAR_MOD_AISpecification_Keyword_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_PhysicalDimension_LifeCycle_Standard.arxml
        

    AUTOSAR_MOD_AISpecification_Unit_Standard.arxml
    ->  Includes Units
        To use it: 
        - Load AUTOSAR_MOD_AISpecification_KeywordSet_Blueprint.arxml
        - Load AUTOSAR_MOD_GeneralDefinition_LifeCycle.arxml
        - Load AUTOSAR_MOD_AISpecification_Keyword_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_PhysicalDimension_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_PhysicalDimension_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_Unit_LifeCycle_Standard.arxml
        

    AUTOSAR_MOD_AISpecification_DataConstr_Blueprint.arxml
    ->  Includes DataConstr_Blueprints
        To use it: 
        - Load AUTOSAR_MOD_AISpecification_KeywordSet_Blueprint.arxml
        - Load AUTOSAR_MOD_GeneralDefinition_LifeCycle.arxml
        - Load AUTOSAR_MOD_AISpecification_Keyword_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_PhysicalDimension_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_PhysicalDimension_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_Unit_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_Unit_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_DataConstr_LifeCycle_Standard.arxml

    AUTOSAR_MOD_AISpecification_CompuMethod_Blueprint.arxml
    ->  Includes CompuMethod_Blueprints
        To use it: 
        - Load AUTOSAR_MOD_AISpecification_KeywordSet_Blueprint.arxml
        - Load AUTOSAR_MOD_GeneralDefinition_LifeCycle.arxml
        - Load AUTOSAR_MOD_AISpecification_Keyword_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_PhysicalDimension_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_PhysicalDimension_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_Unit_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_Unit_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_DataConstr_Blueprint.arxml
        - Load AUTOSAR_MOD_AISpecification_DataConstr_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_CompuMethod_LifeCycle_Standard.arxml

    AUTOSAR_MOD_AISpecification_ApplicationDataType_Blueprint.arxml
    ->  Includes ApplicationDataType_Blueprints
        To use it: 
        - Load AUTOSAR_MOD_AISpecification_KeywordSet_Blueprint.arxml
        - Load AUTOSAR_MOD_GeneralDefinition_LifeCycle.arxml
        - Load AUTOSAR_MOD_AISpecification_Keyword_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_PhysicalDimension_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_PhysicalDimension_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_Unit_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_Unit_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_DataConstr_Blueprint.arxml
        - Load AUTOSAR_MOD_AISpecification_DataConstr_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_CompuMethod_Blueprint.arxml
        - Load AUTOSAR_MOD_AISpecification_CompuMethod_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_ApplicationDataType_LifeCycle_Standard.arxml

    AUTOSAR_MOD_AISpecification_PortInterface_Blueprint.arxml
    ->  Includes PortInterface_Blueprints
        To use it: 
        - Load AUTOSAR_MOD_AISpecification_KeywordSet_Blueprint.arxml
        - Load AUTOSAR_MOD_GeneralDefinition_LifeCycle.arxml
        - Load AUTOSAR_MOD_AISpecification_Keyword_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_PhysicalDimension_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_PhysicalDimension_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_Unit_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_Unit_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_DataConstr_Blueprint.arxml
        - Load AUTOSAR_MOD_AISpecification_DataConstr_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_CompuMethod_Blueprint.arxml
        - Load AUTOSAR_MOD_AISpecification_CompuMethod_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_ApplicationDataType_Blueprint.arxml
        - Load AUTOSAR_MOD_AISpecification_ApplicationDataType_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_PortInterface_LifeCycle_Standard.arxml

    AUTOSAR_MOD_AISpecification_PortPrototypeBlueprint_Blueprint.arxml
    ->  Includes PortPrototypeBlueprints
        To use it: 
        - Load AUTOSAR_MOD_AISpecification_KeywordSet_Blueprint.arxml
        - Load AUTOSAR_MOD_GeneralDefinition_LifeCycle.arxml
        - Load AUTOSAR_MOD_AISpecification_Keyword_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_PhysicalDimension_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_PhysicalDimension_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_Unit_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_Unit_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_DataConstr_Blueprint.arxml
        - Load AUTOSAR_MOD_AISpecification_DataConstr_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_CompuMethod_Blueprint.arxml
        - Load AUTOSAR_MOD_AISpecification_CompuMethod_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_ApplicationDataType_Blueprint.arxml
        - Load AUTOSAR_MOD_AISpecification_ApplicationDataType_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_PortInterface_Blueprint.arxml
        - Load AUTOSAR_MOD_AISpecification_PortInterface_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_PortPrototypeBlueprint_LifeCycle_Standard.arxml

    AUTOSAR_MOD_AISpecification_Collection_Body_Blueprint.arxml
    ->  Includes Collection_Body_Blueprint (Views for Body)
        To use it: 
        - Load AUTOSAR_MOD_AISpecification_KeywordSet_Blueprint.arxml
        - Load AUTOSAR_MOD_GeneralDefinition_LifeCycle.arxml
        - Load AUTOSAR_MOD_AISpecification_Keyword_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_PhysicalDimension_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_PhysicalDimension_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_Unit_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_Unit_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_DataConstr_Blueprint.arxml
        - Load AUTOSAR_MOD_AISpecification_DataConstr_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_CompuMethod_Blueprint.arxml
        - Load AUTOSAR_MOD_AISpecification_CompuMethod_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_ApplicationDataType_Blueprint.arxml
        - Load AUTOSAR_MOD_AISpecification_ApplicationDataType_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_PortInterface_Blueprint.arxml
        - Load AUTOSAR_MOD_AISpecification_PortInterface_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_PortPrototypeBlueprint_Blueprint.arxml
        - Load AUTOSAR_MOD_AISpecification_PortPrototypeBlueprint_LifeCycle_Standard.arxml

    AUTOSAR_MOD_AISpecification_Collection_Pt_Blueprint.arxml 
    ->  Includes Collection_Pt_Blueprint (Views for Powertrain)
        To use it: 
        - Load AUTOSAR_MOD_AISpecification_KeywordSet_Blueprint.arxml
        - Load AUTOSAR_MOD_GeneralDefinition_LifeCycle.arxml
        - Load AUTOSAR_MOD_AISpecification_Keyword_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_PhysicalDimension_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_PhysicalDimension_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_Unit_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_Unit_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_DataConstr_Blueprint.arxml
        - Load AUTOSAR_MOD_AISpecification_DataConstr_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_CompuMethod_Blueprint.arxml
        - Load AUTOSAR_MOD_AISpecification_CompuMethod_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_ApplicationDataType_Blueprint.arxml
        - Load AUTOSAR_MOD_AISpecification_ApplicationDataType_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_PortInterface_Blueprint.arxml
        - Load AUTOSAR_MOD_AISpecification_PortInterface_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_PortPrototypeBlueprint_Blueprint.arxml
        - Load AUTOSAR_MOD_AISpecification_PortPrototypeBlueprint_LifeCycle_Standard.arxml

    AUTOSAR_MOD_AISpecification_Collection_Chassis_Blueprint.arxml   
    ->  Includes Collection_Chassis_Blueprint (Views for Chassis)
        To use it: 
        - Load AUTOSAR_MOD_AISpecification_KeywordSet_Blueprint.arxml
        - Load AUTOSAR_MOD_GeneralDefinition_LifeCycle.arxml
        - Load AUTOSAR_MOD_AISpecification_Keyword_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_PhysicalDimension_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_PhysicalDimension_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_Unit_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_Unit_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_DataConstr_Blueprint.arxml
        - Load AUTOSAR_MOD_AISpecification_DataConstr_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_CompuMethod_Blueprint.arxml
        - Load AUTOSAR_MOD_AISpecification_CompuMethod_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_ApplicationDataType_Blueprint.arxml
        - Load AUTOSAR_MOD_AISpecification_ApplicationDataType_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_PortInterface_Blueprint.arxml
        - Load AUTOSAR_MOD_AISpecification_PortInterface_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_PortPrototypeBlueprint_Blueprint.arxml
        - Load AUTOSAR_MOD_AISpecification_PortPrototypeBlueprint_LifeCycle_Standard.arxml

    AUTOSAR_MOD_AISpecification_Collection_OccptPedSfty_Blueprint.arxml   
    ->  Includes Collection_OccptPedSfty_Blueprint (Views for Occupant and Pedestrian Safety System)
        To use it: 
        - Load AUTOSAR_MOD_AISpecification_KeywordSet_Blueprint.arxml
        - Load AUTOSAR_MOD_GeneralDefinition_LifeCycle.arxml
        - Load AUTOSAR_MOD_AISpecification_Keyword_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_PhysicalDimension_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_PhysicalDimension_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_Unit_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_Unit_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_DataConstr_Blueprint.arxml
        - Load AUTOSAR_MOD_AISpecification_DataConstr_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_CompuMethod_Blueprint.arxml
        - Load AUTOSAR_MOD_AISpecification_CompuMethod_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_ApplicationDataType_Blueprint.arxml
        - Load AUTOSAR_MOD_AISpecification_ApplicationDataType_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_PortInterface_Blueprint.arxml
        - Load AUTOSAR_MOD_AISpecification_PortInterface_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_PortPrototypeBlueprint_Blueprint.arxml
        - Load AUTOSAR_MOD_AISpecification_PortPrototypeBlueprint_LifeCycle_Standard.arxml

    AUTOSAR_MOD_AISpecification_Collection_MmedTelmHmi_Blueprint.arxml 
    ->  Includes Collection_MmedTelmHmi_Blueprint 
        (Views for Multimedia Telematics and Human Machine Interface)
        To use it: 
        - Load AUTOSAR_MOD_AISpecification_KeywordSet_Blueprint.arxml
        - Load AUTOSAR_MOD_GeneralDefinition_LifeCycle.arxml
        - Load AUTOSAR_MOD_AISpecification_Keyword_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_PhysicalDimension_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_PhysicalDimension_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_Unit_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_Unit_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_DataConstr_Blueprint.arxml
        - Load AUTOSAR_MOD_AISpecification_DataConstr_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_CompuMethod_Blueprint.arxml
        - Load AUTOSAR_MOD_AISpecification_CompuMethod_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_ApplicationDataType_Blueprint.arxml
        - Load AUTOSAR_MOD_AISpecification_ApplicationDataType_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_PortInterface_Blueprint.arxml
        - Load AUTOSAR_MOD_AISpecification_PortInterface_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_PortPrototypeBlueprint_Blueprint.arxml
        - Load AUTOSAR_MOD_AISpecification_PortPrototypeBlueprint_LifeCycle_Standard.arxml

AUTOSAR_MOD_AISpecification_Collection_AIMC_Keyword_Blueprint.arxm
    ->  Includes  List of Physical and Logic keywords used by Powertrain Domain
        To use it: 
        - Load AUTOSAR_MOD_GeneralDefinition_LifeCycle.arxml
        - Load AUTOSAR_MOD_AISpecification_Keyword_LifeCycle_Standard.arxml
        - Load AUTOSAR_MOD_AISpecification_KeywordSet_Blueprint.arxml

Change History:

+----------+-------+--------------------------+------------------------------------------+
|Date      |Release|Changed by                |Change Description                        |
+----------+-------+--------------------------+------------------------------------------+
|2018-10-31| 4.4.0 |AUTOSAR Release Management| * Add new ASAM Units support             |
+----------+-------+--------------------------+------------------------------------------+
|2017-12-08| 4.3.1 |AUTOSAR Release Management| * Editorial changes                      |
+----------+-------+--------------------------+------------------------------------------+
|2016-11-30| 4.3.0 |AUTOSAR Release Management| * New TRSM Domain contents               |
|          |       |                          |   implementation with external references|
|          |       |                          |   in textual format                      |
|          |       |                          | * New Units and Physical Dimensions      |
|          |       |                          |   elements introduced                    |
|          |       |                          | * Minor bugs fixed                       |
|          |       |                          |                                          |
+----------+-------+--------------------------+------------------------------------------+
