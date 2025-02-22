﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/ValidationError.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{
  class ValidateSecurityProfileBehaviorsResult
  {
  public:
    AWS_IOT_API ValidateSecurityProfileBehaviorsResult();
    AWS_IOT_API ValidateSecurityProfileBehaviorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ValidateSecurityProfileBehaviorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>True if the behaviors were valid.</p>
     */
    inline bool GetValid() const{ return m_valid; }

    /**
     * <p>True if the behaviors were valid.</p>
     */
    inline void SetValid(bool value) { m_valid = value; }

    /**
     * <p>True if the behaviors were valid.</p>
     */
    inline ValidateSecurityProfileBehaviorsResult& WithValid(bool value) { SetValid(value); return *this;}


    /**
     * <p>The list of any errors found in the behaviors.</p>
     */
    inline const Aws::Vector<ValidationError>& GetValidationErrors() const{ return m_validationErrors; }

    /**
     * <p>The list of any errors found in the behaviors.</p>
     */
    inline void SetValidationErrors(const Aws::Vector<ValidationError>& value) { m_validationErrors = value; }

    /**
     * <p>The list of any errors found in the behaviors.</p>
     */
    inline void SetValidationErrors(Aws::Vector<ValidationError>&& value) { m_validationErrors = std::move(value); }

    /**
     * <p>The list of any errors found in the behaviors.</p>
     */
    inline ValidateSecurityProfileBehaviorsResult& WithValidationErrors(const Aws::Vector<ValidationError>& value) { SetValidationErrors(value); return *this;}

    /**
     * <p>The list of any errors found in the behaviors.</p>
     */
    inline ValidateSecurityProfileBehaviorsResult& WithValidationErrors(Aws::Vector<ValidationError>&& value) { SetValidationErrors(std::move(value)); return *this;}

    /**
     * <p>The list of any errors found in the behaviors.</p>
     */
    inline ValidateSecurityProfileBehaviorsResult& AddValidationErrors(const ValidationError& value) { m_validationErrors.push_back(value); return *this; }

    /**
     * <p>The list of any errors found in the behaviors.</p>
     */
    inline ValidateSecurityProfileBehaviorsResult& AddValidationErrors(ValidationError&& value) { m_validationErrors.push_back(std::move(value)); return *this; }

  private:

    bool m_valid;

    Aws::Vector<ValidationError> m_validationErrors;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
