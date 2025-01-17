/*
 * spoonacular API
 * The spoonacular Nutrition, Recipe, and Food API allows you to access over 380,000 recipes, thousands of ingredients, 800,000 food products, and 100,000 menu items. Our food ontology and semantic recipe search engine makes it possible to search for recipes using natural language queries, such as \"gluten free brownies without sugar\" or \"low fat vegan cupcakes.\" You can automatically calculate the nutritional information for any recipe, analyze recipe costs, visualize ingredient lists, find recipes for what's in your fridge, find recipes based on special diets, nutritional requirements, or favorite ingredients, classify recipes into types and cuisines, convert ingredient amounts, or even compute an entire meal plan. With our powerful API, you can create many kinds of food and especially nutrition apps.  Special diets/dietary requirements currently available include: vegan, vegetarian, pescetarian, gluten free, grain free, dairy free, high protein, whole 30, low sodium, low carb, Paleo, ketogenic, FODMAP, and Primal.
 *
 * The version of the OpenAPI document: 1.1
 * Contact: mail@spoonacular.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package com.spoonacular.client.model;

import java.util.Objects;
import java.util.Arrays;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import com.spoonacular.client.model.SearchAllFood200ResponseSearchResultsInner;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Set;

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
import com.google.gson.JsonArray;
import com.google.gson.JsonDeserializationContext;
import com.google.gson.JsonDeserializer;
import com.google.gson.JsonElement;
import com.google.gson.JsonObject;
import com.google.gson.JsonParseException;
import com.google.gson.TypeAdapterFactory;
import com.google.gson.reflect.TypeToken;

import java.lang.reflect.Type;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Set;

import com.spoonacular.client.JSON;

/**
 * 
 */
@ApiModel(description = "")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2022-09-09T18:25:28.115+02:00[Europe/Berlin]")
public class SearchAllFood200Response {
  public static final String SERIALIZED_NAME_QUERY = "query";
  @SerializedName(SERIALIZED_NAME_QUERY)
  private String query;

  public static final String SERIALIZED_NAME_TOTAL_RESULTS = "totalResults";
  @SerializedName(SERIALIZED_NAME_TOTAL_RESULTS)
  private Integer totalResults;

  public static final String SERIALIZED_NAME_LIMIT = "limit";
  @SerializedName(SERIALIZED_NAME_LIMIT)
  private Integer limit;

  public static final String SERIALIZED_NAME_OFFSET = "offset";
  @SerializedName(SERIALIZED_NAME_OFFSET)
  private Integer offset;

  public static final String SERIALIZED_NAME_SEARCH_RESULTS = "searchResults";
  @SerializedName(SERIALIZED_NAME_SEARCH_RESULTS)
  private Set<SearchAllFood200ResponseSearchResultsInner> searchResults = new LinkedHashSet<>();

  public SearchAllFood200Response() { 
  }

  public SearchAllFood200Response query(String query) {
    
    this.query = query;
    return this;
  }

   /**
   * Get query
   * @return query
  **/
  @javax.annotation.Nonnull
  @ApiModelProperty(required = true, value = "")

  public String getQuery() {
    return query;
  }


  public void setQuery(String query) {
    this.query = query;
  }


  public SearchAllFood200Response totalResults(Integer totalResults) {
    
    this.totalResults = totalResults;
    return this;
  }

   /**
   * Get totalResults
   * @return totalResults
  **/
  @javax.annotation.Nonnull
  @ApiModelProperty(required = true, value = "")

  public Integer getTotalResults() {
    return totalResults;
  }


  public void setTotalResults(Integer totalResults) {
    this.totalResults = totalResults;
  }


  public SearchAllFood200Response limit(Integer limit) {
    
    this.limit = limit;
    return this;
  }

   /**
   * Get limit
   * @return limit
  **/
  @javax.annotation.Nonnull
  @ApiModelProperty(required = true, value = "")

  public Integer getLimit() {
    return limit;
  }


  public void setLimit(Integer limit) {
    this.limit = limit;
  }


  public SearchAllFood200Response offset(Integer offset) {
    
    this.offset = offset;
    return this;
  }

   /**
   * Get offset
   * @return offset
  **/
  @javax.annotation.Nonnull
  @ApiModelProperty(required = true, value = "")

  public Integer getOffset() {
    return offset;
  }


  public void setOffset(Integer offset) {
    this.offset = offset;
  }


  public SearchAllFood200Response searchResults(Set<SearchAllFood200ResponseSearchResultsInner> searchResults) {
    
    this.searchResults = searchResults;
    return this;
  }

  public SearchAllFood200Response addSearchResultsItem(SearchAllFood200ResponseSearchResultsInner searchResultsItem) {
    this.searchResults.add(searchResultsItem);
    return this;
  }

   /**
   * Get searchResults
   * @return searchResults
  **/
  @javax.annotation.Nonnull
  @ApiModelProperty(required = true, value = "")

  public Set<SearchAllFood200ResponseSearchResultsInner> getSearchResults() {
    return searchResults;
  }


  public void setSearchResults(Set<SearchAllFood200ResponseSearchResultsInner> searchResults) {
    this.searchResults = searchResults;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    SearchAllFood200Response searchAllFood200Response = (SearchAllFood200Response) o;
    return Objects.equals(this.query, searchAllFood200Response.query) &&
        Objects.equals(this.totalResults, searchAllFood200Response.totalResults) &&
        Objects.equals(this.limit, searchAllFood200Response.limit) &&
        Objects.equals(this.offset, searchAllFood200Response.offset) &&
        Objects.equals(this.searchResults, searchAllFood200Response.searchResults);
  }

  @Override
  public int hashCode() {
    return Objects.hash(query, totalResults, limit, offset, searchResults);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class SearchAllFood200Response {\n");
    sb.append("    query: ").append(toIndentedString(query)).append("\n");
    sb.append("    totalResults: ").append(toIndentedString(totalResults)).append("\n");
    sb.append("    limit: ").append(toIndentedString(limit)).append("\n");
    sb.append("    offset: ").append(toIndentedString(offset)).append("\n");
    sb.append("    searchResults: ").append(toIndentedString(searchResults)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }


  public static HashSet<String> openapiFields;
  public static HashSet<String> openapiRequiredFields;

  static {
    // a set of all properties/fields (JSON key names)
    openapiFields = new HashSet<String>();
    openapiFields.add("query");
    openapiFields.add("totalResults");
    openapiFields.add("limit");
    openapiFields.add("offset");
    openapiFields.add("searchResults");

    // a set of required properties/fields (JSON key names)
    openapiRequiredFields = new HashSet<String>();
    openapiRequiredFields.add("query");
    openapiRequiredFields.add("totalResults");
    openapiRequiredFields.add("limit");
    openapiRequiredFields.add("offset");
    openapiRequiredFields.add("searchResults");
  }

 /**
  * Validates the JSON Object and throws an exception if issues found
  *
  * @param jsonObj JSON Object
  * @throws IOException if the JSON Object is invalid with respect to SearchAllFood200Response
  */
  public static void validateJsonObject(JsonObject jsonObj) throws IOException {
      if (jsonObj == null) {
        if (SearchAllFood200Response.openapiRequiredFields.isEmpty()) {
          return;
        } else { // has required fields
          throw new IllegalArgumentException(String.format("The required field(s) %s in SearchAllFood200Response is not found in the empty JSON string", SearchAllFood200Response.openapiRequiredFields.toString()));
        }
      }

      Set<Entry<String, JsonElement>> entries = jsonObj.entrySet();
      // check to see if the JSON string contains additional fields
      for (Entry<String, JsonElement> entry : entries) {
        if (!SearchAllFood200Response.openapiFields.contains(entry.getKey())) {
          throw new IllegalArgumentException(String.format("The field `%s` in the JSON string is not defined in the `SearchAllFood200Response` properties. JSON: %s", entry.getKey(), jsonObj.toString()));
        }
      }

      // check to make sure all required properties/fields are present in the JSON string
      for (String requiredField : SearchAllFood200Response.openapiRequiredFields) {
        if (jsonObj.get(requiredField) == null) {
          throw new IllegalArgumentException(String.format("The required field `%s` is not found in the JSON string: %s", requiredField, jsonObj.toString()));
        }
      }
      if (jsonObj.get("query") != null && !jsonObj.get("query").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `query` to be a primitive type in the JSON string but got `%s`", jsonObj.get("query").toString()));
      }
      JsonArray jsonArraysearchResults = jsonObj.getAsJsonArray("searchResults");
      if (jsonArraysearchResults != null) {
        // ensure the json data is an array
        if (!jsonObj.get("searchResults").isJsonArray()) {
          throw new IllegalArgumentException(String.format("Expected the field `searchResults` to be an array in the JSON string but got `%s`", jsonObj.get("searchResults").toString()));
        }

        // validate the optional field `searchResults` (array)
        for (int i = 0; i < jsonArraysearchResults.size(); i++) {
          SearchAllFood200ResponseSearchResultsInner.validateJsonObject(jsonArraysearchResults.get(i).getAsJsonObject());
        };
      }
  }

  public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
    @SuppressWarnings("unchecked")
    @Override
    public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
       if (!SearchAllFood200Response.class.isAssignableFrom(type.getRawType())) {
         return null; // this class only serializes 'SearchAllFood200Response' and its subtypes
       }
       final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
       final TypeAdapter<SearchAllFood200Response> thisAdapter
                        = gson.getDelegateAdapter(this, TypeToken.get(SearchAllFood200Response.class));

       return (TypeAdapter<T>) new TypeAdapter<SearchAllFood200Response>() {
           @Override
           public void write(JsonWriter out, SearchAllFood200Response value) throws IOException {
             JsonObject obj = thisAdapter.toJsonTree(value).getAsJsonObject();
             elementAdapter.write(out, obj);
           }

           @Override
           public SearchAllFood200Response read(JsonReader in) throws IOException {
             JsonObject jsonObj = elementAdapter.read(in).getAsJsonObject();
             validateJsonObject(jsonObj);
             return thisAdapter.fromJsonTree(jsonObj);
           }

       }.nullSafe();
    }
  }

 /**
  * Create an instance of SearchAllFood200Response given an JSON string
  *
  * @param jsonString JSON string
  * @return An instance of SearchAllFood200Response
  * @throws IOException if the JSON string is invalid with respect to SearchAllFood200Response
  */
  public static SearchAllFood200Response fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, SearchAllFood200Response.class);
  }

 /**
  * Convert an instance of SearchAllFood200Response to an JSON string
  *
  * @return JSON string
  */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}

