﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apigateway/model/ContentHandlingStrategy.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Represents an integration response. The status code must map to an existing
   * MethodResponse, and parameters and templates can be used to transform the
   * back-end response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/IntegrationResponse">AWS
   * API Reference</a></p>
   */
  class IntegrationResponse
  {
  public:
    AWS_APIGATEWAY_API IntegrationResponse();
    AWS_APIGATEWAY_API IntegrationResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API IntegrationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the status code that is used to map the integration response to an
     * existing MethodResponse.</p>
     */
    inline const Aws::String& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>Specifies the status code that is used to map the integration response to an
     * existing MethodResponse.</p>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>Specifies the status code that is used to map the integration response to an
     * existing MethodResponse.</p>
     */
    inline void SetStatusCode(const Aws::String& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>Specifies the status code that is used to map the integration response to an
     * existing MethodResponse.</p>
     */
    inline void SetStatusCode(Aws::String&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }

    /**
     * <p>Specifies the status code that is used to map the integration response to an
     * existing MethodResponse.</p>
     */
    inline void SetStatusCode(const char* value) { m_statusCodeHasBeenSet = true; m_statusCode.assign(value); }

    /**
     * <p>Specifies the status code that is used to map the integration response to an
     * existing MethodResponse.</p>
     */
    inline IntegrationResponse& WithStatusCode(const Aws::String& value) { SetStatusCode(value); return *this;}

    /**
     * <p>Specifies the status code that is used to map the integration response to an
     * existing MethodResponse.</p>
     */
    inline IntegrationResponse& WithStatusCode(Aws::String&& value) { SetStatusCode(std::move(value)); return *this;}

    /**
     * <p>Specifies the status code that is used to map the integration response to an
     * existing MethodResponse.</p>
     */
    inline IntegrationResponse& WithStatusCode(const char* value) { SetStatusCode(value); return *this;}


    /**
     * <p>Specifies the regular expression (regex) pattern used to choose an
     * integration response based on the response from the back end. For example, if
     * the success response returns nothing and the error response returns some string,
     * you could use the <code>.+</code> regex to match error response. However, make
     * sure that the error response does not contain any newline (<code>\n</code>)
     * character in such cases. If the back end is an AWS Lambda function, the AWS
     * Lambda function error header is matched. For all other HTTP and AWS back ends,
     * the HTTP status code is matched.</p>
     */
    inline const Aws::String& GetSelectionPattern() const{ return m_selectionPattern; }

    /**
     * <p>Specifies the regular expression (regex) pattern used to choose an
     * integration response based on the response from the back end. For example, if
     * the success response returns nothing and the error response returns some string,
     * you could use the <code>.+</code> regex to match error response. However, make
     * sure that the error response does not contain any newline (<code>\n</code>)
     * character in such cases. If the back end is an AWS Lambda function, the AWS
     * Lambda function error header is matched. For all other HTTP and AWS back ends,
     * the HTTP status code is matched.</p>
     */
    inline bool SelectionPatternHasBeenSet() const { return m_selectionPatternHasBeenSet; }

    /**
     * <p>Specifies the regular expression (regex) pattern used to choose an
     * integration response based on the response from the back end. For example, if
     * the success response returns nothing and the error response returns some string,
     * you could use the <code>.+</code> regex to match error response. However, make
     * sure that the error response does not contain any newline (<code>\n</code>)
     * character in such cases. If the back end is an AWS Lambda function, the AWS
     * Lambda function error header is matched. For all other HTTP and AWS back ends,
     * the HTTP status code is matched.</p>
     */
    inline void SetSelectionPattern(const Aws::String& value) { m_selectionPatternHasBeenSet = true; m_selectionPattern = value; }

    /**
     * <p>Specifies the regular expression (regex) pattern used to choose an
     * integration response based on the response from the back end. For example, if
     * the success response returns nothing and the error response returns some string,
     * you could use the <code>.+</code> regex to match error response. However, make
     * sure that the error response does not contain any newline (<code>\n</code>)
     * character in such cases. If the back end is an AWS Lambda function, the AWS
     * Lambda function error header is matched. For all other HTTP and AWS back ends,
     * the HTTP status code is matched.</p>
     */
    inline void SetSelectionPattern(Aws::String&& value) { m_selectionPatternHasBeenSet = true; m_selectionPattern = std::move(value); }

    /**
     * <p>Specifies the regular expression (regex) pattern used to choose an
     * integration response based on the response from the back end. For example, if
     * the success response returns nothing and the error response returns some string,
     * you could use the <code>.+</code> regex to match error response. However, make
     * sure that the error response does not contain any newline (<code>\n</code>)
     * character in such cases. If the back end is an AWS Lambda function, the AWS
     * Lambda function error header is matched. For all other HTTP and AWS back ends,
     * the HTTP status code is matched.</p>
     */
    inline void SetSelectionPattern(const char* value) { m_selectionPatternHasBeenSet = true; m_selectionPattern.assign(value); }

    /**
     * <p>Specifies the regular expression (regex) pattern used to choose an
     * integration response based on the response from the back end. For example, if
     * the success response returns nothing and the error response returns some string,
     * you could use the <code>.+</code> regex to match error response. However, make
     * sure that the error response does not contain any newline (<code>\n</code>)
     * character in such cases. If the back end is an AWS Lambda function, the AWS
     * Lambda function error header is matched. For all other HTTP and AWS back ends,
     * the HTTP status code is matched.</p>
     */
    inline IntegrationResponse& WithSelectionPattern(const Aws::String& value) { SetSelectionPattern(value); return *this;}

    /**
     * <p>Specifies the regular expression (regex) pattern used to choose an
     * integration response based on the response from the back end. For example, if
     * the success response returns nothing and the error response returns some string,
     * you could use the <code>.+</code> regex to match error response. However, make
     * sure that the error response does not contain any newline (<code>\n</code>)
     * character in such cases. If the back end is an AWS Lambda function, the AWS
     * Lambda function error header is matched. For all other HTTP and AWS back ends,
     * the HTTP status code is matched.</p>
     */
    inline IntegrationResponse& WithSelectionPattern(Aws::String&& value) { SetSelectionPattern(std::move(value)); return *this;}

    /**
     * <p>Specifies the regular expression (regex) pattern used to choose an
     * integration response based on the response from the back end. For example, if
     * the success response returns nothing and the error response returns some string,
     * you could use the <code>.+</code> regex to match error response. However, make
     * sure that the error response does not contain any newline (<code>\n</code>)
     * character in such cases. If the back end is an AWS Lambda function, the AWS
     * Lambda function error header is matched. For all other HTTP and AWS back ends,
     * the HTTP status code is matched.</p>
     */
    inline IntegrationResponse& WithSelectionPattern(const char* value) { SetSelectionPattern(value); return *this;}


    /**
     * <p>A key-value map specifying response parameters that are passed to the method
     * response from the back end. The key is a method response header parameter name
     * and the mapped value is an integration response header value, a static value
     * enclosed within a pair of single quotes, or a JSON expression from the
     * integration response body. The mapping key must match the pattern of
     * <code>method.response.header.{name}</code>, where <code>name</code> is a valid
     * and unique header name. The mapped non-static value must match the pattern of
     * <code>integration.response.header.{name}</code> or
     * <code>integration.response.body.{JSON-expression}</code>, where
     * <code>name</code> is a valid and unique response header name and
     * <code>JSON-expression</code> is a valid JSON expression without the
     * <code>$</code> prefix.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseParameters() const{ return m_responseParameters; }

    /**
     * <p>A key-value map specifying response parameters that are passed to the method
     * response from the back end. The key is a method response header parameter name
     * and the mapped value is an integration response header value, a static value
     * enclosed within a pair of single quotes, or a JSON expression from the
     * integration response body. The mapping key must match the pattern of
     * <code>method.response.header.{name}</code>, where <code>name</code> is a valid
     * and unique header name. The mapped non-static value must match the pattern of
     * <code>integration.response.header.{name}</code> or
     * <code>integration.response.body.{JSON-expression}</code>, where
     * <code>name</code> is a valid and unique response header name and
     * <code>JSON-expression</code> is a valid JSON expression without the
     * <code>$</code> prefix.</p>
     */
    inline bool ResponseParametersHasBeenSet() const { return m_responseParametersHasBeenSet; }

    /**
     * <p>A key-value map specifying response parameters that are passed to the method
     * response from the back end. The key is a method response header parameter name
     * and the mapped value is an integration response header value, a static value
     * enclosed within a pair of single quotes, or a JSON expression from the
     * integration response body. The mapping key must match the pattern of
     * <code>method.response.header.{name}</code>, where <code>name</code> is a valid
     * and unique header name. The mapped non-static value must match the pattern of
     * <code>integration.response.header.{name}</code> or
     * <code>integration.response.body.{JSON-expression}</code>, where
     * <code>name</code> is a valid and unique response header name and
     * <code>JSON-expression</code> is a valid JSON expression without the
     * <code>$</code> prefix.</p>
     */
    inline void SetResponseParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_responseParametersHasBeenSet = true; m_responseParameters = value; }

    /**
     * <p>A key-value map specifying response parameters that are passed to the method
     * response from the back end. The key is a method response header parameter name
     * and the mapped value is an integration response header value, a static value
     * enclosed within a pair of single quotes, or a JSON expression from the
     * integration response body. The mapping key must match the pattern of
     * <code>method.response.header.{name}</code>, where <code>name</code> is a valid
     * and unique header name. The mapped non-static value must match the pattern of
     * <code>integration.response.header.{name}</code> or
     * <code>integration.response.body.{JSON-expression}</code>, where
     * <code>name</code> is a valid and unique response header name and
     * <code>JSON-expression</code> is a valid JSON expression without the
     * <code>$</code> prefix.</p>
     */
    inline void SetResponseParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_responseParametersHasBeenSet = true; m_responseParameters = std::move(value); }

    /**
     * <p>A key-value map specifying response parameters that are passed to the method
     * response from the back end. The key is a method response header parameter name
     * and the mapped value is an integration response header value, a static value
     * enclosed within a pair of single quotes, or a JSON expression from the
     * integration response body. The mapping key must match the pattern of
     * <code>method.response.header.{name}</code>, where <code>name</code> is a valid
     * and unique header name. The mapped non-static value must match the pattern of
     * <code>integration.response.header.{name}</code> or
     * <code>integration.response.body.{JSON-expression}</code>, where
     * <code>name</code> is a valid and unique response header name and
     * <code>JSON-expression</code> is a valid JSON expression without the
     * <code>$</code> prefix.</p>
     */
    inline IntegrationResponse& WithResponseParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetResponseParameters(value); return *this;}

    /**
     * <p>A key-value map specifying response parameters that are passed to the method
     * response from the back end. The key is a method response header parameter name
     * and the mapped value is an integration response header value, a static value
     * enclosed within a pair of single quotes, or a JSON expression from the
     * integration response body. The mapping key must match the pattern of
     * <code>method.response.header.{name}</code>, where <code>name</code> is a valid
     * and unique header name. The mapped non-static value must match the pattern of
     * <code>integration.response.header.{name}</code> or
     * <code>integration.response.body.{JSON-expression}</code>, where
     * <code>name</code> is a valid and unique response header name and
     * <code>JSON-expression</code> is a valid JSON expression without the
     * <code>$</code> prefix.</p>
     */
    inline IntegrationResponse& WithResponseParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseParameters(std::move(value)); return *this;}

    /**
     * <p>A key-value map specifying response parameters that are passed to the method
     * response from the back end. The key is a method response header parameter name
     * and the mapped value is an integration response header value, a static value
     * enclosed within a pair of single quotes, or a JSON expression from the
     * integration response body. The mapping key must match the pattern of
     * <code>method.response.header.{name}</code>, where <code>name</code> is a valid
     * and unique header name. The mapped non-static value must match the pattern of
     * <code>integration.response.header.{name}</code> or
     * <code>integration.response.body.{JSON-expression}</code>, where
     * <code>name</code> is a valid and unique response header name and
     * <code>JSON-expression</code> is a valid JSON expression without the
     * <code>$</code> prefix.</p>
     */
    inline IntegrationResponse& AddResponseParameters(const Aws::String& key, const Aws::String& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, value); return *this; }

    /**
     * <p>A key-value map specifying response parameters that are passed to the method
     * response from the back end. The key is a method response header parameter name
     * and the mapped value is an integration response header value, a static value
     * enclosed within a pair of single quotes, or a JSON expression from the
     * integration response body. The mapping key must match the pattern of
     * <code>method.response.header.{name}</code>, where <code>name</code> is a valid
     * and unique header name. The mapped non-static value must match the pattern of
     * <code>integration.response.header.{name}</code> or
     * <code>integration.response.body.{JSON-expression}</code>, where
     * <code>name</code> is a valid and unique response header name and
     * <code>JSON-expression</code> is a valid JSON expression without the
     * <code>$</code> prefix.</p>
     */
    inline IntegrationResponse& AddResponseParameters(Aws::String&& key, const Aws::String& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key-value map specifying response parameters that are passed to the method
     * response from the back end. The key is a method response header parameter name
     * and the mapped value is an integration response header value, a static value
     * enclosed within a pair of single quotes, or a JSON expression from the
     * integration response body. The mapping key must match the pattern of
     * <code>method.response.header.{name}</code>, where <code>name</code> is a valid
     * and unique header name. The mapped non-static value must match the pattern of
     * <code>integration.response.header.{name}</code> or
     * <code>integration.response.body.{JSON-expression}</code>, where
     * <code>name</code> is a valid and unique response header name and
     * <code>JSON-expression</code> is a valid JSON expression without the
     * <code>$</code> prefix.</p>
     */
    inline IntegrationResponse& AddResponseParameters(const Aws::String& key, Aws::String&& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key-value map specifying response parameters that are passed to the method
     * response from the back end. The key is a method response header parameter name
     * and the mapped value is an integration response header value, a static value
     * enclosed within a pair of single quotes, or a JSON expression from the
     * integration response body. The mapping key must match the pattern of
     * <code>method.response.header.{name}</code>, where <code>name</code> is a valid
     * and unique header name. The mapped non-static value must match the pattern of
     * <code>integration.response.header.{name}</code> or
     * <code>integration.response.body.{JSON-expression}</code>, where
     * <code>name</code> is a valid and unique response header name and
     * <code>JSON-expression</code> is a valid JSON expression without the
     * <code>$</code> prefix.</p>
     */
    inline IntegrationResponse& AddResponseParameters(Aws::String&& key, Aws::String&& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A key-value map specifying response parameters that are passed to the method
     * response from the back end. The key is a method response header parameter name
     * and the mapped value is an integration response header value, a static value
     * enclosed within a pair of single quotes, or a JSON expression from the
     * integration response body. The mapping key must match the pattern of
     * <code>method.response.header.{name}</code>, where <code>name</code> is a valid
     * and unique header name. The mapped non-static value must match the pattern of
     * <code>integration.response.header.{name}</code> or
     * <code>integration.response.body.{JSON-expression}</code>, where
     * <code>name</code> is a valid and unique response header name and
     * <code>JSON-expression</code> is a valid JSON expression without the
     * <code>$</code> prefix.</p>
     */
    inline IntegrationResponse& AddResponseParameters(const char* key, Aws::String&& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key-value map specifying response parameters that are passed to the method
     * response from the back end. The key is a method response header parameter name
     * and the mapped value is an integration response header value, a static value
     * enclosed within a pair of single quotes, or a JSON expression from the
     * integration response body. The mapping key must match the pattern of
     * <code>method.response.header.{name}</code>, where <code>name</code> is a valid
     * and unique header name. The mapped non-static value must match the pattern of
     * <code>integration.response.header.{name}</code> or
     * <code>integration.response.body.{JSON-expression}</code>, where
     * <code>name</code> is a valid and unique response header name and
     * <code>JSON-expression</code> is a valid JSON expression without the
     * <code>$</code> prefix.</p>
     */
    inline IntegrationResponse& AddResponseParameters(Aws::String&& key, const char* value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key-value map specifying response parameters that are passed to the method
     * response from the back end. The key is a method response header parameter name
     * and the mapped value is an integration response header value, a static value
     * enclosed within a pair of single quotes, or a JSON expression from the
     * integration response body. The mapping key must match the pattern of
     * <code>method.response.header.{name}</code>, where <code>name</code> is a valid
     * and unique header name. The mapped non-static value must match the pattern of
     * <code>integration.response.header.{name}</code> or
     * <code>integration.response.body.{JSON-expression}</code>, where
     * <code>name</code> is a valid and unique response header name and
     * <code>JSON-expression</code> is a valid JSON expression without the
     * <code>$</code> prefix.</p>
     */
    inline IntegrationResponse& AddResponseParameters(const char* key, const char* value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, value); return *this; }


    /**
     * <p>Specifies the templates used to transform the integration response body.
     * Response templates are represented as a key/value map, with a content-type as
     * the key and a template as the value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseTemplates() const{ return m_responseTemplates; }

    /**
     * <p>Specifies the templates used to transform the integration response body.
     * Response templates are represented as a key/value map, with a content-type as
     * the key and a template as the value.</p>
     */
    inline bool ResponseTemplatesHasBeenSet() const { return m_responseTemplatesHasBeenSet; }

    /**
     * <p>Specifies the templates used to transform the integration response body.
     * Response templates are represented as a key/value map, with a content-type as
     * the key and a template as the value.</p>
     */
    inline void SetResponseTemplates(const Aws::Map<Aws::String, Aws::String>& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates = value; }

    /**
     * <p>Specifies the templates used to transform the integration response body.
     * Response templates are represented as a key/value map, with a content-type as
     * the key and a template as the value.</p>
     */
    inline void SetResponseTemplates(Aws::Map<Aws::String, Aws::String>&& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates = std::move(value); }

    /**
     * <p>Specifies the templates used to transform the integration response body.
     * Response templates are represented as a key/value map, with a content-type as
     * the key and a template as the value.</p>
     */
    inline IntegrationResponse& WithResponseTemplates(const Aws::Map<Aws::String, Aws::String>& value) { SetResponseTemplates(value); return *this;}

    /**
     * <p>Specifies the templates used to transform the integration response body.
     * Response templates are represented as a key/value map, with a content-type as
     * the key and a template as the value.</p>
     */
    inline IntegrationResponse& WithResponseTemplates(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseTemplates(std::move(value)); return *this;}

    /**
     * <p>Specifies the templates used to transform the integration response body.
     * Response templates are represented as a key/value map, with a content-type as
     * the key and a template as the value.</p>
     */
    inline IntegrationResponse& AddResponseTemplates(const Aws::String& key, const Aws::String& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(key, value); return *this; }

    /**
     * <p>Specifies the templates used to transform the integration response body.
     * Response templates are represented as a key/value map, with a content-type as
     * the key and a template as the value.</p>
     */
    inline IntegrationResponse& AddResponseTemplates(Aws::String&& key, const Aws::String& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the templates used to transform the integration response body.
     * Response templates are represented as a key/value map, with a content-type as
     * the key and a template as the value.</p>
     */
    inline IntegrationResponse& AddResponseTemplates(const Aws::String& key, Aws::String&& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the templates used to transform the integration response body.
     * Response templates are represented as a key/value map, with a content-type as
     * the key and a template as the value.</p>
     */
    inline IntegrationResponse& AddResponseTemplates(Aws::String&& key, Aws::String&& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specifies the templates used to transform the integration response body.
     * Response templates are represented as a key/value map, with a content-type as
     * the key and a template as the value.</p>
     */
    inline IntegrationResponse& AddResponseTemplates(const char* key, Aws::String&& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the templates used to transform the integration response body.
     * Response templates are represented as a key/value map, with a content-type as
     * the key and a template as the value.</p>
     */
    inline IntegrationResponse& AddResponseTemplates(Aws::String&& key, const char* value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the templates used to transform the integration response body.
     * Response templates are represented as a key/value map, with a content-type as
     * the key and a template as the value.</p>
     */
    inline IntegrationResponse& AddResponseTemplates(const char* key, const char* value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(key, value); return *this; }


    /**
     * <p>Specifies how to handle response payload content type conversions. Supported
     * values are <code>CONVERT_TO_BINARY</code> and <code>CONVERT_TO_TEXT</code>, with
     * the following behaviors:</p> <p>If this property is not defined, the response
     * payload will be passed through from the integration response to the method
     * response without modification.</p>
     */
    inline const ContentHandlingStrategy& GetContentHandling() const{ return m_contentHandling; }

    /**
     * <p>Specifies how to handle response payload content type conversions. Supported
     * values are <code>CONVERT_TO_BINARY</code> and <code>CONVERT_TO_TEXT</code>, with
     * the following behaviors:</p> <p>If this property is not defined, the response
     * payload will be passed through from the integration response to the method
     * response without modification.</p>
     */
    inline bool ContentHandlingHasBeenSet() const { return m_contentHandlingHasBeenSet; }

    /**
     * <p>Specifies how to handle response payload content type conversions. Supported
     * values are <code>CONVERT_TO_BINARY</code> and <code>CONVERT_TO_TEXT</code>, with
     * the following behaviors:</p> <p>If this property is not defined, the response
     * payload will be passed through from the integration response to the method
     * response without modification.</p>
     */
    inline void SetContentHandling(const ContentHandlingStrategy& value) { m_contentHandlingHasBeenSet = true; m_contentHandling = value; }

    /**
     * <p>Specifies how to handle response payload content type conversions. Supported
     * values are <code>CONVERT_TO_BINARY</code> and <code>CONVERT_TO_TEXT</code>, with
     * the following behaviors:</p> <p>If this property is not defined, the response
     * payload will be passed through from the integration response to the method
     * response without modification.</p>
     */
    inline void SetContentHandling(ContentHandlingStrategy&& value) { m_contentHandlingHasBeenSet = true; m_contentHandling = std::move(value); }

    /**
     * <p>Specifies how to handle response payload content type conversions. Supported
     * values are <code>CONVERT_TO_BINARY</code> and <code>CONVERT_TO_TEXT</code>, with
     * the following behaviors:</p> <p>If this property is not defined, the response
     * payload will be passed through from the integration response to the method
     * response without modification.</p>
     */
    inline IntegrationResponse& WithContentHandling(const ContentHandlingStrategy& value) { SetContentHandling(value); return *this;}

    /**
     * <p>Specifies how to handle response payload content type conversions. Supported
     * values are <code>CONVERT_TO_BINARY</code> and <code>CONVERT_TO_TEXT</code>, with
     * the following behaviors:</p> <p>If this property is not defined, the response
     * payload will be passed through from the integration response to the method
     * response without modification.</p>
     */
    inline IntegrationResponse& WithContentHandling(ContentHandlingStrategy&& value) { SetContentHandling(std::move(value)); return *this;}

  private:

    Aws::String m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_selectionPattern;
    bool m_selectionPatternHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_responseParameters;
    bool m_responseParametersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_responseTemplates;
    bool m_responseTemplatesHasBeenSet = false;

    ContentHandlingStrategy m_contentHandling;
    bool m_contentHandlingHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
