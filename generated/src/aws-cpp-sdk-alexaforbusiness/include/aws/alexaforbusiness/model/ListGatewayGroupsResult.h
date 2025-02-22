﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/GatewayGroupSummary.h>
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
namespace AlexaForBusiness
{
namespace Model
{
  class ListGatewayGroupsResult
  {
  public:
    AWS_ALEXAFORBUSINESS_API ListGatewayGroupsResult();
    AWS_ALEXAFORBUSINESS_API ListGatewayGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ALEXAFORBUSINESS_API ListGatewayGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The gateway groups in the list.</p>
     */
    inline const Aws::Vector<GatewayGroupSummary>& GetGatewayGroups() const{ return m_gatewayGroups; }

    /**
     * <p>The gateway groups in the list.</p>
     */
    inline void SetGatewayGroups(const Aws::Vector<GatewayGroupSummary>& value) { m_gatewayGroups = value; }

    /**
     * <p>The gateway groups in the list.</p>
     */
    inline void SetGatewayGroups(Aws::Vector<GatewayGroupSummary>&& value) { m_gatewayGroups = std::move(value); }

    /**
     * <p>The gateway groups in the list.</p>
     */
    inline ListGatewayGroupsResult& WithGatewayGroups(const Aws::Vector<GatewayGroupSummary>& value) { SetGatewayGroups(value); return *this;}

    /**
     * <p>The gateway groups in the list.</p>
     */
    inline ListGatewayGroupsResult& WithGatewayGroups(Aws::Vector<GatewayGroupSummary>&& value) { SetGatewayGroups(std::move(value)); return *this;}

    /**
     * <p>The gateway groups in the list.</p>
     */
    inline ListGatewayGroupsResult& AddGatewayGroups(const GatewayGroupSummary& value) { m_gatewayGroups.push_back(value); return *this; }

    /**
     * <p>The gateway groups in the list.</p>
     */
    inline ListGatewayGroupsResult& AddGatewayGroups(GatewayGroupSummary&& value) { m_gatewayGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>The token used to paginate though multiple pages of gateway group
     * summaries.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token used to paginate though multiple pages of gateway group
     * summaries.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token used to paginate though multiple pages of gateway group
     * summaries.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token used to paginate though multiple pages of gateway group
     * summaries.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token used to paginate though multiple pages of gateway group
     * summaries.</p>
     */
    inline ListGatewayGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token used to paginate though multiple pages of gateway group
     * summaries.</p>
     */
    inline ListGatewayGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token used to paginate though multiple pages of gateway group
     * summaries.</p>
     */
    inline ListGatewayGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<GatewayGroupSummary> m_gatewayGroups;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
