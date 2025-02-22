﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/Application.h>
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
namespace mgn
{
namespace Model
{
  class ListApplicationsResult
  {
  public:
    AWS_MGN_API ListApplicationsResult();
    AWS_MGN_API ListApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API ListApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Applications list.</p>
     */
    inline const Aws::Vector<Application>& GetItems() const{ return m_items; }

    /**
     * <p>Applications list.</p>
     */
    inline void SetItems(const Aws::Vector<Application>& value) { m_items = value; }

    /**
     * <p>Applications list.</p>
     */
    inline void SetItems(Aws::Vector<Application>&& value) { m_items = std::move(value); }

    /**
     * <p>Applications list.</p>
     */
    inline ListApplicationsResult& WithItems(const Aws::Vector<Application>& value) { SetItems(value); return *this;}

    /**
     * <p>Applications list.</p>
     */
    inline ListApplicationsResult& WithItems(Aws::Vector<Application>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>Applications list.</p>
     */
    inline ListApplicationsResult& AddItems(const Application& value) { m_items.push_back(value); return *this; }

    /**
     * <p>Applications list.</p>
     */
    inline ListApplicationsResult& AddItems(Application&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>Response next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Response next token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Response next token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Response next token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Response next token.</p>
     */
    inline ListApplicationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Response next token.</p>
     */
    inline ListApplicationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Response next token.</p>
     */
    inline ListApplicationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Application> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
