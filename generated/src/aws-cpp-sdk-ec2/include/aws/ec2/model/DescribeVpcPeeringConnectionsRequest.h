﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Filter.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class DescribeVpcPeeringConnectionsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeVpcPeeringConnectionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVpcPeeringConnections"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>accepter-vpc-info.cidr-block</code> - The IPv4 CIDR block of the accepter
     * VPC.</p> </li> <li> <p> <code>accepter-vpc-info.owner-id</code> - The ID of the
     * Amazon Web Services account that owns the accepter VPC.</p> </li> <li> <p>
     * <code>accepter-vpc-info.vpc-id</code> - The ID of the accepter VPC.</p> </li>
     * <li> <p> <code>expiration-time</code> - The expiration date and time for the VPC
     * peering connection.</p> </li> <li> <p>
     * <code>requester-vpc-info.cidr-block</code> - The IPv4 CIDR block of the
     * requester's VPC.</p> </li> <li> <p> <code>requester-vpc-info.owner-id</code> -
     * The ID of the Amazon Web Services account that owns the requester VPC.</p> </li>
     * <li> <p> <code>requester-vpc-info.vpc-id</code> - The ID of the requester
     * VPC.</p> </li> <li> <p> <code>status-code</code> - The status of the VPC peering
     * connection (<code>pending-acceptance</code> | <code>failed</code> |
     * <code>expired</code> | <code>provisioning</code> | <code>active</code> |
     * <code>deleting</code> | <code>deleted</code> | <code>rejected</code>).</p> </li>
     * <li> <p> <code>status-message</code> - A message that provides more information
     * about the status of the VPC peering connection, if applicable.</p> </li> <li>
     * <p> <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned
     * to the resource. Use the tag key in the filter name and the tag value as the
     * filter value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-peering-connection-id</code> - The ID of the VPC peering
     * connection.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>accepter-vpc-info.cidr-block</code> - The IPv4 CIDR block of the accepter
     * VPC.</p> </li> <li> <p> <code>accepter-vpc-info.owner-id</code> - The ID of the
     * Amazon Web Services account that owns the accepter VPC.</p> </li> <li> <p>
     * <code>accepter-vpc-info.vpc-id</code> - The ID of the accepter VPC.</p> </li>
     * <li> <p> <code>expiration-time</code> - The expiration date and time for the VPC
     * peering connection.</p> </li> <li> <p>
     * <code>requester-vpc-info.cidr-block</code> - The IPv4 CIDR block of the
     * requester's VPC.</p> </li> <li> <p> <code>requester-vpc-info.owner-id</code> -
     * The ID of the Amazon Web Services account that owns the requester VPC.</p> </li>
     * <li> <p> <code>requester-vpc-info.vpc-id</code> - The ID of the requester
     * VPC.</p> </li> <li> <p> <code>status-code</code> - The status of the VPC peering
     * connection (<code>pending-acceptance</code> | <code>failed</code> |
     * <code>expired</code> | <code>provisioning</code> | <code>active</code> |
     * <code>deleting</code> | <code>deleted</code> | <code>rejected</code>).</p> </li>
     * <li> <p> <code>status-message</code> - A message that provides more information
     * about the status of the VPC peering connection, if applicable.</p> </li> <li>
     * <p> <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned
     * to the resource. Use the tag key in the filter name and the tag value as the
     * filter value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-peering-connection-id</code> - The ID of the VPC peering
     * connection.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>accepter-vpc-info.cidr-block</code> - The IPv4 CIDR block of the accepter
     * VPC.</p> </li> <li> <p> <code>accepter-vpc-info.owner-id</code> - The ID of the
     * Amazon Web Services account that owns the accepter VPC.</p> </li> <li> <p>
     * <code>accepter-vpc-info.vpc-id</code> - The ID of the accepter VPC.</p> </li>
     * <li> <p> <code>expiration-time</code> - The expiration date and time for the VPC
     * peering connection.</p> </li> <li> <p>
     * <code>requester-vpc-info.cidr-block</code> - The IPv4 CIDR block of the
     * requester's VPC.</p> </li> <li> <p> <code>requester-vpc-info.owner-id</code> -
     * The ID of the Amazon Web Services account that owns the requester VPC.</p> </li>
     * <li> <p> <code>requester-vpc-info.vpc-id</code> - The ID of the requester
     * VPC.</p> </li> <li> <p> <code>status-code</code> - The status of the VPC peering
     * connection (<code>pending-acceptance</code> | <code>failed</code> |
     * <code>expired</code> | <code>provisioning</code> | <code>active</code> |
     * <code>deleting</code> | <code>deleted</code> | <code>rejected</code>).</p> </li>
     * <li> <p> <code>status-message</code> - A message that provides more information
     * about the status of the VPC peering connection, if applicable.</p> </li> <li>
     * <p> <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned
     * to the resource. Use the tag key in the filter name and the tag value as the
     * filter value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-peering-connection-id</code> - The ID of the VPC peering
     * connection.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>accepter-vpc-info.cidr-block</code> - The IPv4 CIDR block of the accepter
     * VPC.</p> </li> <li> <p> <code>accepter-vpc-info.owner-id</code> - The ID of the
     * Amazon Web Services account that owns the accepter VPC.</p> </li> <li> <p>
     * <code>accepter-vpc-info.vpc-id</code> - The ID of the accepter VPC.</p> </li>
     * <li> <p> <code>expiration-time</code> - The expiration date and time for the VPC
     * peering connection.</p> </li> <li> <p>
     * <code>requester-vpc-info.cidr-block</code> - The IPv4 CIDR block of the
     * requester's VPC.</p> </li> <li> <p> <code>requester-vpc-info.owner-id</code> -
     * The ID of the Amazon Web Services account that owns the requester VPC.</p> </li>
     * <li> <p> <code>requester-vpc-info.vpc-id</code> - The ID of the requester
     * VPC.</p> </li> <li> <p> <code>status-code</code> - The status of the VPC peering
     * connection (<code>pending-acceptance</code> | <code>failed</code> |
     * <code>expired</code> | <code>provisioning</code> | <code>active</code> |
     * <code>deleting</code> | <code>deleted</code> | <code>rejected</code>).</p> </li>
     * <li> <p> <code>status-message</code> - A message that provides more information
     * about the status of the VPC peering connection, if applicable.</p> </li> <li>
     * <p> <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned
     * to the resource. Use the tag key in the filter name and the tag value as the
     * filter value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-peering-connection-id</code> - The ID of the VPC peering
     * connection.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>accepter-vpc-info.cidr-block</code> - The IPv4 CIDR block of the accepter
     * VPC.</p> </li> <li> <p> <code>accepter-vpc-info.owner-id</code> - The ID of the
     * Amazon Web Services account that owns the accepter VPC.</p> </li> <li> <p>
     * <code>accepter-vpc-info.vpc-id</code> - The ID of the accepter VPC.</p> </li>
     * <li> <p> <code>expiration-time</code> - The expiration date and time for the VPC
     * peering connection.</p> </li> <li> <p>
     * <code>requester-vpc-info.cidr-block</code> - The IPv4 CIDR block of the
     * requester's VPC.</p> </li> <li> <p> <code>requester-vpc-info.owner-id</code> -
     * The ID of the Amazon Web Services account that owns the requester VPC.</p> </li>
     * <li> <p> <code>requester-vpc-info.vpc-id</code> - The ID of the requester
     * VPC.</p> </li> <li> <p> <code>status-code</code> - The status of the VPC peering
     * connection (<code>pending-acceptance</code> | <code>failed</code> |
     * <code>expired</code> | <code>provisioning</code> | <code>active</code> |
     * <code>deleting</code> | <code>deleted</code> | <code>rejected</code>).</p> </li>
     * <li> <p> <code>status-message</code> - A message that provides more information
     * about the status of the VPC peering connection, if applicable.</p> </li> <li>
     * <p> <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned
     * to the resource. Use the tag key in the filter name and the tag value as the
     * filter value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-peering-connection-id</code> - The ID of the VPC peering
     * connection.</p> </li> </ul>
     */
    inline DescribeVpcPeeringConnectionsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>accepter-vpc-info.cidr-block</code> - The IPv4 CIDR block of the accepter
     * VPC.</p> </li> <li> <p> <code>accepter-vpc-info.owner-id</code> - The ID of the
     * Amazon Web Services account that owns the accepter VPC.</p> </li> <li> <p>
     * <code>accepter-vpc-info.vpc-id</code> - The ID of the accepter VPC.</p> </li>
     * <li> <p> <code>expiration-time</code> - The expiration date and time for the VPC
     * peering connection.</p> </li> <li> <p>
     * <code>requester-vpc-info.cidr-block</code> - The IPv4 CIDR block of the
     * requester's VPC.</p> </li> <li> <p> <code>requester-vpc-info.owner-id</code> -
     * The ID of the Amazon Web Services account that owns the requester VPC.</p> </li>
     * <li> <p> <code>requester-vpc-info.vpc-id</code> - The ID of the requester
     * VPC.</p> </li> <li> <p> <code>status-code</code> - The status of the VPC peering
     * connection (<code>pending-acceptance</code> | <code>failed</code> |
     * <code>expired</code> | <code>provisioning</code> | <code>active</code> |
     * <code>deleting</code> | <code>deleted</code> | <code>rejected</code>).</p> </li>
     * <li> <p> <code>status-message</code> - A message that provides more information
     * about the status of the VPC peering connection, if applicable.</p> </li> <li>
     * <p> <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned
     * to the resource. Use the tag key in the filter name and the tag value as the
     * filter value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-peering-connection-id</code> - The ID of the VPC peering
     * connection.</p> </li> </ul>
     */
    inline DescribeVpcPeeringConnectionsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>accepter-vpc-info.cidr-block</code> - The IPv4 CIDR block of the accepter
     * VPC.</p> </li> <li> <p> <code>accepter-vpc-info.owner-id</code> - The ID of the
     * Amazon Web Services account that owns the accepter VPC.</p> </li> <li> <p>
     * <code>accepter-vpc-info.vpc-id</code> - The ID of the accepter VPC.</p> </li>
     * <li> <p> <code>expiration-time</code> - The expiration date and time for the VPC
     * peering connection.</p> </li> <li> <p>
     * <code>requester-vpc-info.cidr-block</code> - The IPv4 CIDR block of the
     * requester's VPC.</p> </li> <li> <p> <code>requester-vpc-info.owner-id</code> -
     * The ID of the Amazon Web Services account that owns the requester VPC.</p> </li>
     * <li> <p> <code>requester-vpc-info.vpc-id</code> - The ID of the requester
     * VPC.</p> </li> <li> <p> <code>status-code</code> - The status of the VPC peering
     * connection (<code>pending-acceptance</code> | <code>failed</code> |
     * <code>expired</code> | <code>provisioning</code> | <code>active</code> |
     * <code>deleting</code> | <code>deleted</code> | <code>rejected</code>).</p> </li>
     * <li> <p> <code>status-message</code> - A message that provides more information
     * about the status of the VPC peering connection, if applicable.</p> </li> <li>
     * <p> <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned
     * to the resource. Use the tag key in the filter name and the tag value as the
     * filter value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-peering-connection-id</code> - The ID of the VPC peering
     * connection.</p> </li> </ul>
     */
    inline DescribeVpcPeeringConnectionsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>accepter-vpc-info.cidr-block</code> - The IPv4 CIDR block of the accepter
     * VPC.</p> </li> <li> <p> <code>accepter-vpc-info.owner-id</code> - The ID of the
     * Amazon Web Services account that owns the accepter VPC.</p> </li> <li> <p>
     * <code>accepter-vpc-info.vpc-id</code> - The ID of the accepter VPC.</p> </li>
     * <li> <p> <code>expiration-time</code> - The expiration date and time for the VPC
     * peering connection.</p> </li> <li> <p>
     * <code>requester-vpc-info.cidr-block</code> - The IPv4 CIDR block of the
     * requester's VPC.</p> </li> <li> <p> <code>requester-vpc-info.owner-id</code> -
     * The ID of the Amazon Web Services account that owns the requester VPC.</p> </li>
     * <li> <p> <code>requester-vpc-info.vpc-id</code> - The ID of the requester
     * VPC.</p> </li> <li> <p> <code>status-code</code> - The status of the VPC peering
     * connection (<code>pending-acceptance</code> | <code>failed</code> |
     * <code>expired</code> | <code>provisioning</code> | <code>active</code> |
     * <code>deleting</code> | <code>deleted</code> | <code>rejected</code>).</p> </li>
     * <li> <p> <code>status-message</code> - A message that provides more information
     * about the status of the VPC peering connection, if applicable.</p> </li> <li>
     * <p> <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned
     * to the resource. Use the tag key in the filter name and the tag value as the
     * filter value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-peering-connection-id</code> - The ID of the VPC peering
     * connection.</p> </li> </ul>
     */
    inline DescribeVpcPeeringConnectionsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DescribeVpcPeeringConnectionsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>One or more VPC peering connection IDs.</p> <p>Default: Describes all your
     * VPC peering connections.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcPeeringConnectionIds() const{ return m_vpcPeeringConnectionIds; }

    /**
     * <p>One or more VPC peering connection IDs.</p> <p>Default: Describes all your
     * VPC peering connections.</p>
     */
    inline bool VpcPeeringConnectionIdsHasBeenSet() const { return m_vpcPeeringConnectionIdsHasBeenSet; }

    /**
     * <p>One or more VPC peering connection IDs.</p> <p>Default: Describes all your
     * VPC peering connections.</p>
     */
    inline void SetVpcPeeringConnectionIds(const Aws::Vector<Aws::String>& value) { m_vpcPeeringConnectionIdsHasBeenSet = true; m_vpcPeeringConnectionIds = value; }

    /**
     * <p>One or more VPC peering connection IDs.</p> <p>Default: Describes all your
     * VPC peering connections.</p>
     */
    inline void SetVpcPeeringConnectionIds(Aws::Vector<Aws::String>&& value) { m_vpcPeeringConnectionIdsHasBeenSet = true; m_vpcPeeringConnectionIds = std::move(value); }

    /**
     * <p>One or more VPC peering connection IDs.</p> <p>Default: Describes all your
     * VPC peering connections.</p>
     */
    inline DescribeVpcPeeringConnectionsRequest& WithVpcPeeringConnectionIds(const Aws::Vector<Aws::String>& value) { SetVpcPeeringConnectionIds(value); return *this;}

    /**
     * <p>One or more VPC peering connection IDs.</p> <p>Default: Describes all your
     * VPC peering connections.</p>
     */
    inline DescribeVpcPeeringConnectionsRequest& WithVpcPeeringConnectionIds(Aws::Vector<Aws::String>&& value) { SetVpcPeeringConnectionIds(std::move(value)); return *this;}

    /**
     * <p>One or more VPC peering connection IDs.</p> <p>Default: Describes all your
     * VPC peering connections.</p>
     */
    inline DescribeVpcPeeringConnectionsRequest& AddVpcPeeringConnectionIds(const Aws::String& value) { m_vpcPeeringConnectionIdsHasBeenSet = true; m_vpcPeeringConnectionIds.push_back(value); return *this; }

    /**
     * <p>One or more VPC peering connection IDs.</p> <p>Default: Describes all your
     * VPC peering connections.</p>
     */
    inline DescribeVpcPeeringConnectionsRequest& AddVpcPeeringConnectionIds(Aws::String&& value) { m_vpcPeeringConnectionIdsHasBeenSet = true; m_vpcPeeringConnectionIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more VPC peering connection IDs.</p> <p>Default: Describes all your
     * VPC peering connections.</p>
     */
    inline DescribeVpcPeeringConnectionsRequest& AddVpcPeeringConnectionIds(const char* value) { m_vpcPeeringConnectionIdsHasBeenSet = true; m_vpcPeeringConnectionIds.push_back(value); return *this; }


    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeVpcPeeringConnectionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeVpcPeeringConnectionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeVpcPeeringConnectionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline DescribeVpcPeeringConnectionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcPeeringConnectionIds;
    bool m_vpcPeeringConnectionIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
