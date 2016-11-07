# cmake doesn't support maps, so we use list elements as key-value pairs; the ':' becomes a separator between key and value
set(C2J_LIST "")
list(APPEND C2J_LIST "acm:2015-12-08") 
list(APPEND C2J_LIST "apigateway:2015-07-09")
list(APPEND C2J_LIST "autoscaling:2011-01-01")
list(APPEND C2J_LIST "budgets:2016-10-20")
list(APPEND C2J_LIST "cloudformation:2010-05-15")
list(APPEND C2J_LIST "cloudfront:2016-01-28")
list(APPEND C2J_LIST "cloudhsm:2014-05-30")
list(APPEND C2J_LIST "cloudsearch:2013-01-01")
list(APPEND C2J_LIST "cloudsearchdomain:2013-01-01")
list(APPEND C2J_LIST "cloudtrail:2013-11-01")
list(APPEND C2J_LIST "codecommit:2015-04-13")
list(APPEND C2J_LIST "codedeploy:2014-10-06")
list(APPEND C2J_LIST "codepipeline:2015-07-09")
list(APPEND C2J_LIST "cognito-identity:2014-06-30")
list(APPEND C2J_LIST "cognito-sync:2014-06-30")
list(APPEND C2J_LIST "config:2014-11-12")
list(APPEND C2J_LIST "datapipeline:2012-10-29")
list(APPEND C2J_LIST "devicefarm:2015-06-23")
list(APPEND C2J_LIST "directconnect:2012-10-25")
list(APPEND C2J_LIST "dms:2016-01-01")
list(APPEND C2J_LIST "ds:2015-04-16")
list(APPEND C2J_LIST "dynamodb:2012-08-10")
if(NOT PLATFORM_ANDROID OR NOT CMAKE_HOST_WIN32)  # ec2 isn't building for android on windows atm due to an internal compiler error, TODO: investigate further
    list(APPEND C2J_LIST "ec2:2015-10-01")
endif()
list(APPEND C2J_LIST "ecr:2015-09-21")
list(APPEND C2J_LIST "ecs:2014-11-13")
list(APPEND C2J_LIST "elasticache:2015-02-02")
list(APPEND C2J_LIST "elasticbeanstalk:2010-12-01")
list(APPEND C2J_LIST "elasticfilesystem:2015-02-01")
list(APPEND C2J_LIST "elasticloadbalancing:2012-06-01")
list(APPEND C2J_LIST "elasticloadbalancingv2:2015-12-01")
list(APPEND C2J_LIST "elasticmapreduce:2009-03-31")
list(APPEND C2J_LIST "elastictranscoder:2012-09-25")
list(APPEND C2J_LIST "email:2010-12-01")
list(APPEND C2J_LIST "es:2015-01-01")
list(APPEND C2J_LIST "events:2015-10-07")
list(APPEND C2J_LIST "firehose:2015-08-04")
list(APPEND C2J_LIST "gamelift:2015-10-01")
list(APPEND C2J_LIST "glacier:2012-06-01")
list(APPEND C2J_LIST "iam:2010-05-08")
list(APPEND C2J_LIST "importexport:2010-06-01")
list(APPEND C2J_LIST "inspector:2015-08-18")
list(APPEND C2J_LIST "iot:2015-05-28")
list(APPEND C2J_LIST "kinesis:2013-12-02")
list(APPEND C2J_LIST "kinesisanalytics:2015-08-14")
list(APPEND C2J_LIST "kms:2014-11-01")
list(APPEND C2J_LIST "lambda:2015-03-31")
list(APPEND C2J_LIST "logs:2014-03-28")
list(APPEND C2J_LIST "machinelearning:2014-12-12")
list(APPEND C2J_LIST "marketplacecommerceanalytics:2015-07-01")
list(APPEND C2J_LIST "meteringmarketplace:2016-01-14")
list(APPEND C2J_LIST "mobileanalytics:2014-06-05")
list(APPEND C2J_LIST "monitoring:2010-08-01")
list(APPEND C2J_LIST "opsworks:2013-02-18")
list(APPEND C2J_LIST "rds:2014-10-31")
list(APPEND C2J_LIST "redshift:2012-12-01")
list(APPEND C2J_LIST "route53:2013-04-01")
list(APPEND C2J_LIST "route53domains:2014-05-15")
list(APPEND C2J_LIST "s3:2006-03-01")
list(APPEND C2J_LIST "sdb:2009-04-15")
list(APPEND C2J_LIST "sns:2010-03-31")
list(APPEND C2J_LIST "sqs:2012-11-05")
list(APPEND C2J_LIST "ssm:2014-11-06")
list(APPEND C2J_LIST "storagegateway:2013-06-30")
list(APPEND C2J_LIST "sts:2011-06-15")
list(APPEND C2J_LIST "support:2013-04-15")
list(APPEND C2J_LIST "snowball:2016-06-30")
list(APPEND C2J_LIST "swf:2012-01-25")
list(APPEND C2J_LIST "waf:2015-08-24")
list(APPEND C2J_LIST "workspaces:2015-04-08")
list(APPEND C2J_LIST "cognito-idp:2016-04-18")
list(APPEND C2J_LIST "application-autoscaling:2016-02-06")
list(APPEND C2J_LIST "servicecatalog:2015-12-10")

set(SDK_TEST_PROJECT_LIST "")
list(APPEND SDK_TEST_PROJECT_LIST "cognito-identity:aws-cpp-sdk-cognitoidentity-integration-tests")
list(APPEND SDK_TEST_PROJECT_LIST "dynamodb:aws-cpp-sdk-dynamodb-integration-tests")
list(APPEND SDK_TEST_PROJECT_LIST "identity-management:aws-cpp-sdk-identity-management-tests")
list(APPEND SDK_TEST_PROJECT_LIST "lambda:aws-cpp-sdk-lambda-integration-tests")
list(APPEND SDK_TEST_PROJECT_LIST "s3:aws-cpp-sdk-s3-integration-tests")
list(APPEND SDK_TEST_PROJECT_LIST "sqs:aws-cpp-sdk-sqs-integration-tests")
list(APPEND SDK_TEST_PROJECT_LIST "transfer:aws-cpp-sdk-transfer-tests")
list(APPEND SDK_TEST_PROJECT_LIST "core:aws-cpp-sdk-core-tests")

set(SDK_DEPENDENCY_LIST "")
list(APPEND SDK_DEPENDENCY_LIST "access-management:iam,cognito-identity,core")
list(APPEND SDK_DEPENDENCY_LIST "identity-management:cognito-identity,core")
list(APPEND SDK_DEPENDENCY_LIST "queues:sqs,core")
list(APPEND SDK_DEPENDENCY_LIST "transfer:s3,core")

set(TEST_DEPENDENCY_LIST "")
list(APPEND TEST_DEPENDENCY_LIST "identity-management:cognito-identity,core")
list(APPEND TEST_DEPENDENCY_LIST "lambda:access-management,cognito-identity,iam,kinesis,core")
list(APPEND TEST_DEPENDENCY_LIST "sqs:access-management,cognito-identity,iam,core")
list(APPEND TEST_DEPENDENCY_LIST "transfer:s3,core")

# make a list of the generated clients
set(GENERATED_SERVICE_LIST "")
foreach(GENERATED_C2J_SERVICE IN LISTS C2J_LIST)
    STRING(REGEX REPLACE "([^:]+):.*" "\\1" SERVICE_RESULT ${GENERATED_C2J_SERVICE})
    list(APPEND GENERATED_SERVICE_LIST ${SERVICE_RESULT})
    list(APPEND SDK_DEPENDENCY_LIST "${SERVICE_RESULT}:core")
endforeach()

# helper function that that gives primitive map functionality by treating a colon as the key-value separator, while the list semi-colon separates pairs
# to use, pass the list-map in as a third parameter (see helper functions below)
function(get_map_element KEY VALUE_VAR)
    foreach(ELEMENT_PAIR ${ARGN})
        STRING(REGEX REPLACE "([^:]+):.*" "\\1" KEY_RESULT ${ELEMENT_PAIR})
        if(${KEY_RESULT} STREQUAL ${KEY} )
            STRING(REGEX REPLACE "[^:]+:(.*)" "\\1" VALUE_RESULT ${ELEMENT_PAIR})
            set(${VALUE_VAR} "${VALUE_RESULT}" PARENT_SCOPE)
            return()
        endif()
    endforeach()
    set(${VALUE_VAR} "" PARENT_SCOPE)
endfunction(get_map_element)

# a bunch of key-value retrieval functions for the list-maps we defined above
function(get_c2j_date_for_service SERVICE_NAME C2J_DATE_VAR)
    get_map_element(${SERVICE_NAME} TEMP_VAR ${C2J_LIST})
    set(${C2J_DATE_VAR} "${TEMP_VAR}" PARENT_SCOPE)
endfunction()

function(get_test_project_for_service SERVICE_NAME TEST_PROJECT_NAME_VAR)
    get_map_element(${SERVICE_NAME} TEMP_VAR ${SDK_TEST_PROJECT_LIST})
    set(${TEST_PROJECT_NAME_VAR} "${TEMP_VAR}" PARENT_SCOPE)
endfunction()

function(get_dependencies_for_sdk PROJECT_NAME DEPENDENCY_LIST_VAR)
    get_map_element(${PROJECT_NAME} TEMP_VAR ${SDK_DEPENDENCY_LIST})
    set(${DEPENDENCY_LIST_VAR} "${TEMP_VAR}" PARENT_SCOPE)
endfunction()

function(get_dependencies_for_test TEST_NAME DEPENDENCY_LIST_VAR)
    get_map_element(${TEST_NAME} TEMP_VAR ${TEST_DEPENDENCY_LIST})
    set(${DEPENDENCY_LIST_VAR} "${TEMP_VAR}" PARENT_SCOPE)
endfunction()

# returns all sdks, including itself, that depend on the supplied sdk
function(get_sdks_depending_on SDK_NAME DEPENDING_SDKS_VAR)
    set(TEMP_SDK_LIST "${SDK_NAME}")
    foreach(SDK_DEP ${SDK_DEPENDENCY_LIST})
        STRING(REGEX REPLACE "([^:]+):.*" "\\1" KEY_RESULT ${SDK_DEP})
        STRING(REGEX REPLACE "[^:]+:(.*)" "\\1" VALUE_RESULT ${SDK_DEP})
        STRING(REPLACE "," ";" LIST_RESULT ${VALUE_RESULT})
        list(FIND LIST_RESULT ${SDK_NAME} FIND_INDEX)
        if(FIND_INDEX GREATER -1)
            list(APPEND TEMP_SDK_LIST ${KEY_RESULT})
        endif()
    endforeach()

    SET(${DEPENDING_SDKS_VAR} "${TEMP_SDK_LIST}" PARENT_SCOPE)
endfunction()

# when building a fixed target set, missing SDKs are an error
# when building "everything", we forgive missing SDKs; should this become an option instead?
set(SDK_DEPENDENCY_BUILD_LIST "")
if(BUILD_ONLY)
    set(SDK_BUILD_LIST ${BUILD_ONLY})

    foreach(TARGET IN LISTS BUILD_ONLY)
        message(STATUS "Considering ${TARGET}")
        get_dependencies_for_sdk(${TARGET} DEPENDENCY_LIST)
        if(DEPENDENCY_LIST)
            STRING(REPLACE "," ";" LIST_RESULT ${DEPENDENCY_LIST})
            foreach(DEPENDENCY IN LISTS LIST_RESULT)
                list(APPEND SDK_DEPENDENCY_BUILD_LIST ${DEPENDENCY})
            endforeach()
        endif()

        get_dependencies_for_test(${TARGET} DEPENDENCY_LIST)
        if(DEPENDENCY_LIST)
            STRING(REPLACE "," ";" LIST_RESULT ${DEPENDENCY_LIST})
            foreach(DEPENDENCY IN LISTS LIST_RESULT)
                list(APPEND SDK_DEPENDENCY_BUILD_LIST ${DEPENDENCY})
            endforeach()
        endif()
    endforeach()

    LIST(REMOVE_DUPLICATES SDK_BUILD_LIST)
    LIST(REMOVE_DUPLICATES SDK_DEPENDENCY_BUILD_LIST)

    # make sure all the sdks/c2js are present; a missing sdk-directory or c2j file is a build error when building a manually-specified set
    foreach(SDK IN LISTS SDK_BUILD_LIST)
        SET(SDK_DIR "aws-cpp-sdk-${SDK}")
        if(NOT IS_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/${SDK_DIR}")
            message(FATAL_ERROR "${SDK} is required for build, but ${SDK_DIR} directory is missing!")
        endif()

        get_c2j_date_for_service(${SDK} SDK_C2J_DATE)
        SET(SDK_C2J_FILE "${CMAKE_CURRENT_SOURCE_DIR}/code-generation/api-descriptions/${SDK}-${SDK_C2J_DATE}.normal.json")
        if(REGENERATE_CLIENTS AND SDK_C2J_DATE AND NOT (EXISTS ${SDK_C2J_FILE}))
            message(FATAL_ERROR "${SDK} is required for build, but C2J file '${SDK_C2J_FILE}' is missing!")
        endif()
    endforeach()

    set(TEMP_SDK_DEPENDENCY_BUILD_LIST ${SDK_DEPENDENCY_BUILD_LIST})
    foreach (SDK IN LISTS TEMP_SDK_DEPENDENCY_BUILD_LIST)
        list(FIND SDK_BUILD_LIST ${SDK} DEPENDENCY_INDEX)

        if(DEPENDENCY_INDEX LESS 0)
            find_package("aws-cpp-sdk-${SDK}" QUIET)
            if (NOT ${SDK}_FOUND)
                set(SDK_DIR "aws-cpp-sdk-${SDK}")
                if (NOT IS_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/${SDK_DIR}")
                    message(FATAL_ERROR "${SDK} is required for build, but ${SDK_DIR} directory is missing!")
                endif ()

                get_c2j_date_for_service(${SDK} SDK_C2J_DATE)
                set(SDK_C2J_FILE "${CMAKE_CURRENT_SOURCE_DIR}/code-generation/api-descriptions/${SDK}-${SDK_C2J_DATE}.normal.json")
                if (REGENERATE_CLIENTS AND SDK_C2J_DATE AND NOT (EXISTS ${SDK_C2J_FILE}))
                    message(FATAL_ERROR "${SDK} is required for build, but C2J file '${SDK_C2J_FILE}' is missing")
                endif ()
            else ()
                list(REMOVE_ITEM SDK_DEPENDENCY_BUILD_LIST ${SDK})
            endif ()
        else ()
            list(REMOVE_ITEM SDK_DEPENDENCY_BUILD_LIST ${SDK})
        endif ()
    endforeach ()

    foreach (SDK IN LISTS SDK_DEPENDENCY_BUILD_LIST)
        list(APPEND SDK_BUILD_LIST "${SDK}")
    endforeach()
else()
    set(TEMP_SDK_BUILD_LIST ${GENERATED_SERVICE_LIST})
    list(APPEND TEMP_SDK_BUILD_LIST "access-management")
    list(APPEND TEMP_SDK_BUILD_LIST "identity-management")
    list(APPEND TEMP_SDK_BUILD_LIST "queues")
    list(APPEND TEMP_SDK_BUILD_LIST "transfer")
    list(APPEND TEMP_SDK_BUILD_LIST "core")

    set(SDK_BUILD_LIST ${TEMP_SDK_BUILD_LIST})

    # remove any missing targets from the build list, factoring in dependencies appropriately
    foreach(SDK IN LISTS TEMP_SDK_BUILD_LIST)
        SET(REMOVE_SDK 0)

        get_c2j_date_for_service(${SDK} SDK_C2J_DATE)
        SET(SDK_C2J_FILE "${CMAKE_CURRENT_SOURCE_DIR}/code-generation/api-descriptions/${SDK}-${SDK_C2J_DATE}.normal.json")
        if(REGENERATE_CLIENTS AND SDK_C2J_DATE AND NOT (EXISTS ${SDK_C2J_FILE}))
            SET(REMOVE_SDK 1)
        endif()

        SET(SDK_DIR "aws-cpp-sdk-${SDK}")
        if(NOT REGENERATE_CLIENTS OR NOT SDK_C2J_DATE)
            if(NOT IS_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/${SDK_DIR}")
                SET(REMOVE_SDK 1)
            endif()
        endif()

        if(REMOVE_SDK)
            get_sdks_depending_on(${SDK} REMOVE_LIST)
            foreach(REMOVE_SDK IN LISTS REMOVE_LIST)
                list(REMOVE_ITEM SDK_BUILD_LIST ${REMOVE_SDK})
            endforeach()
        endif()
    endforeach()
endif()

# SDK_BUILD_LIST is now a list of present SDKs that can be processed unconditionally

if(ADD_CUSTOM_CLIENTS OR REGENERATE_CLIENTS)
    execute_process(
        COMMAND ${PYTHON_CMD} scripts/generate_sdks.py --prepareTools
            WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    )
endif()

if(REGENERATE_CLIENTS)
    message(STATUS "Regenerating clients that have been selected for build.")

    execute_process( COMMAND ${PYTHON_CMD} scripts/wipe_generated_code.py  WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} )

    foreach(SDK IN LISTS SDK_BUILD_LIST)
        get_c2j_date_for_service(${SDK} C2J_DATE)
        if(C2J_DATE)
            execute_process(
                COMMAND ${PYTHON_CMD} scripts/generate_sdks.py --serviceName ${SDK} --apiVersion ${C2J_DATE} --outputLocation ./
                WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
            )
        endif()
    endforeach()
endif()

macro(add_sdks)
    LIST(APPEND EXPORTS "")

    foreach(SDK IN LISTS SDK_BUILD_LIST)
        SET(SDK_DIR "aws-cpp-sdk-${SDK}")
        add_subdirectory("${SDK_DIR}")
        LIST(APPEND EXPORTS "${SDK_DIR}")
    endforeach()

    #at this point, if user has specified some customized clients, generate them and add them to the build here.
    foreach(custom_client ${ADD_CUSTOM_CLIENTS})
        message(STATUS "${custom_client}")
        STRING(REGEX MATCHALL "serviceName=(.*), ?version=(.*)" CLIENT_MATCHES "${custom_client}")
        SET(C_LEN 0)
        LIST(LENGTH CLIENT_MATCHES C_LEN)
        if(CMAKE_MATCH_COUNT GREATER 0)
            SET(C_SERVICE_NAME ${CMAKE_MATCH_1})
            SET(C_VERSION ${CMAKE_MATCH_2})
            message(STATUS "generating client for ${C_SERVICE_NAME} version ${C_VERSION}")
            execute_process(
                COMMAND ${PYTHON_CMD} scripts/generate_sdks.py --serviceName ${C_SERVICE_NAME} --apiVersion ${C_VERSION} --outputLocation ./
                WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
            )
            STRING(CONCAT C_DIR "aws-cpp-sdk-" ${C_SERVICE_NAME})
            add_subdirectory(${C_DIR})
        endif()
    endforeach(custom_client)

    #testing
    if(ENABLE_TESTING)
        add_subdirectory(testing-resources)

        if(PLATFORM_ANDROID AND NOT BUILD_SHARED_LIBS)
            add_subdirectory(android-unified-tests)
        else()
            foreach(SDK IN LISTS SDK_BUILD_LIST)
                get_test_project_for_service(${SDK} TEST_PROJECT)
                if(TEST_PROJECT) 
                    # before we add the test, make sure all of its dependencies are present
                    set(ADD_TEST 1)
                    get_dependencies_for_test(${SDK} DEPENDENCY_LIST)
                    if(DEPENDENCY_LIST)
                        STRING(REPLACE "," ";" LIST_RESULT ${DEPENDENCY_LIST})
                        foreach(DEPENDENCY IN LISTS LIST_RESULT)
                            list(FIND SDK_BUILD_LIST ${DEPENDENCY} DEPENDENCY_INDEX)
                            if(DEPENDENCY_INDEX LESS 0)
                                message(STATUS "Removing test project ${TEST_PROJECT} due to missing dependency {$DEPENDENCY}")
                                set(ADD_TEST 0)
                            endif()
                        endforeach()
                    endif()

                    if(ADD_TEST)
                        add_subdirectory(${TEST_PROJECT})
                    endif()
                endif()
             endforeach()
        endif()
    endif()

    # the catch-all config needs to list all the targets in a dependency-sorted order
    include(dependencies)
    sort_links(EXPORTS)

    # make an everything config by just including all the individual configs
    file(WRITE ${CMAKE_BINARY_DIR}/aws-sdk-cpp-config.cmake "")
    foreach(EXPORT_TARGET IN LISTS EXPORTS)
        file(APPEND ${CMAKE_BINARY_DIR}/aws-sdk-cpp-config.cmake "include(\"\${CMAKE_CURRENT_LIST_DIR}/${EXPORT_TARGET}/${EXPORT_TARGET}-config.cmake\")\n")
    endforeach()
endmacro()
