﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ProductViewDetail.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class SearchProductsAsAdminResult
  {
  public:
    AWS_SERVICECATALOG_API SearchProductsAsAdminResult();
    AWS_SERVICECATALOG_API SearchProductsAsAdminResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API SearchProductsAsAdminResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the product views.</p>
     */
    inline const Aws::Vector<ProductViewDetail>& GetProductViewDetails() const{ return m_productViewDetails; }

    /**
     * <p>Information about the product views.</p>
     */
    inline void SetProductViewDetails(const Aws::Vector<ProductViewDetail>& value) { m_productViewDetails = value; }

    /**
     * <p>Information about the product views.</p>
     */
    inline void SetProductViewDetails(Aws::Vector<ProductViewDetail>&& value) { m_productViewDetails = std::move(value); }

    /**
     * <p>Information about the product views.</p>
     */
    inline SearchProductsAsAdminResult& WithProductViewDetails(const Aws::Vector<ProductViewDetail>& value) { SetProductViewDetails(value); return *this;}

    /**
     * <p>Information about the product views.</p>
     */
    inline SearchProductsAsAdminResult& WithProductViewDetails(Aws::Vector<ProductViewDetail>&& value) { SetProductViewDetails(std::move(value)); return *this;}

    /**
     * <p>Information about the product views.</p>
     */
    inline SearchProductsAsAdminResult& AddProductViewDetails(const ProductViewDetail& value) { m_productViewDetails.push_back(value); return *this; }

    /**
     * <p>Information about the product views.</p>
     */
    inline SearchProductsAsAdminResult& AddProductViewDetails(ProductViewDetail&& value) { m_productViewDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline SearchProductsAsAdminResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline SearchProductsAsAdminResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline SearchProductsAsAdminResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<ProductViewDetail> m_productViewDetails;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
