﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/UpdateRuntimeOn.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Lambda
{
namespace Model
{
  class GetRuntimeManagementConfigResult
  {
  public:
    AWS_LAMBDA_API GetRuntimeManagementConfigResult();
    AWS_LAMBDA_API GetRuntimeManagementConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAMBDA_API GetRuntimeManagementConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current runtime update mode of the function.</p>
     */
    inline const UpdateRuntimeOn& GetUpdateRuntimeOn() const{ return m_updateRuntimeOn; }

    /**
     * <p>The current runtime update mode of the function.</p>
     */
    inline void SetUpdateRuntimeOn(const UpdateRuntimeOn& value) { m_updateRuntimeOn = value; }

    /**
     * <p>The current runtime update mode of the function.</p>
     */
    inline void SetUpdateRuntimeOn(UpdateRuntimeOn&& value) { m_updateRuntimeOn = std::move(value); }

    /**
     * <p>The current runtime update mode of the function.</p>
     */
    inline GetRuntimeManagementConfigResult& WithUpdateRuntimeOn(const UpdateRuntimeOn& value) { SetUpdateRuntimeOn(value); return *this;}

    /**
     * <p>The current runtime update mode of the function.</p>
     */
    inline GetRuntimeManagementConfigResult& WithUpdateRuntimeOn(UpdateRuntimeOn&& value) { SetUpdateRuntimeOn(std::move(value)); return *this;}


    /**
     * <p>The ARN of the runtime the function is configured to use. If the runtime
     * update mode is <b>Manual</b>, the ARN is returned, otherwise <code>null</code>
     * is returned.</p>
     */
    inline const Aws::String& GetRuntimeVersionArn() const{ return m_runtimeVersionArn; }

    /**
     * <p>The ARN of the runtime the function is configured to use. If the runtime
     * update mode is <b>Manual</b>, the ARN is returned, otherwise <code>null</code>
     * is returned.</p>
     */
    inline void SetRuntimeVersionArn(const Aws::String& value) { m_runtimeVersionArn = value; }

    /**
     * <p>The ARN of the runtime the function is configured to use. If the runtime
     * update mode is <b>Manual</b>, the ARN is returned, otherwise <code>null</code>
     * is returned.</p>
     */
    inline void SetRuntimeVersionArn(Aws::String&& value) { m_runtimeVersionArn = std::move(value); }

    /**
     * <p>The ARN of the runtime the function is configured to use. If the runtime
     * update mode is <b>Manual</b>, the ARN is returned, otherwise <code>null</code>
     * is returned.</p>
     */
    inline void SetRuntimeVersionArn(const char* value) { m_runtimeVersionArn.assign(value); }

    /**
     * <p>The ARN of the runtime the function is configured to use. If the runtime
     * update mode is <b>Manual</b>, the ARN is returned, otherwise <code>null</code>
     * is returned.</p>
     */
    inline GetRuntimeManagementConfigResult& WithRuntimeVersionArn(const Aws::String& value) { SetRuntimeVersionArn(value); return *this;}

    /**
     * <p>The ARN of the runtime the function is configured to use. If the runtime
     * update mode is <b>Manual</b>, the ARN is returned, otherwise <code>null</code>
     * is returned.</p>
     */
    inline GetRuntimeManagementConfigResult& WithRuntimeVersionArn(Aws::String&& value) { SetRuntimeVersionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the runtime the function is configured to use. If the runtime
     * update mode is <b>Manual</b>, the ARN is returned, otherwise <code>null</code>
     * is returned.</p>
     */
    inline GetRuntimeManagementConfigResult& WithRuntimeVersionArn(const char* value) { SetRuntimeVersionArn(value); return *this;}

  private:

    UpdateRuntimeOn m_updateRuntimeOn;

    Aws::String m_runtimeVersionArn;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
