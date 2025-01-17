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
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;
import java.math.BigDecimal;

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
 * ComputeGlycemicLoad200ResponseIngredientsInner
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2022-09-09T18:25:28.115+02:00[Europe/Berlin]")
public class ComputeGlycemicLoad200ResponseIngredientsInner {
  public static final String SERIALIZED_NAME_ID = "id";
  @SerializedName(SERIALIZED_NAME_ID)
  private Integer id;

  public static final String SERIALIZED_NAME_ORIGINAL = "original";
  @SerializedName(SERIALIZED_NAME_ORIGINAL)
  private String original;

  public static final String SERIALIZED_NAME_GLYCEMIC_INDEX = "glycemicIndex";
  @SerializedName(SERIALIZED_NAME_GLYCEMIC_INDEX)
  private BigDecimal glycemicIndex;

  public static final String SERIALIZED_NAME_GLYCEMIC_LOAD = "glycemicLoad";
  @SerializedName(SERIALIZED_NAME_GLYCEMIC_LOAD)
  private BigDecimal glycemicLoad;

  public ComputeGlycemicLoad200ResponseIngredientsInner() { 
  }

  public ComputeGlycemicLoad200ResponseIngredientsInner id(Integer id) {
    
    this.id = id;
    return this;
  }

   /**
   * Get id
   * @return id
  **/
  @javax.annotation.Nonnull
  @ApiModelProperty(required = true, value = "")

  public Integer getId() {
    return id;
  }


  public void setId(Integer id) {
    this.id = id;
  }


  public ComputeGlycemicLoad200ResponseIngredientsInner original(String original) {
    
    this.original = original;
    return this;
  }

   /**
   * Get original
   * @return original
  **/
  @javax.annotation.Nonnull
  @ApiModelProperty(required = true, value = "")

  public String getOriginal() {
    return original;
  }


  public void setOriginal(String original) {
    this.original = original;
  }


  public ComputeGlycemicLoad200ResponseIngredientsInner glycemicIndex(BigDecimal glycemicIndex) {
    
    this.glycemicIndex = glycemicIndex;
    return this;
  }

   /**
   * Get glycemicIndex
   * @return glycemicIndex
  **/
  @javax.annotation.Nonnull
  @ApiModelProperty(required = true, value = "")

  public BigDecimal getGlycemicIndex() {
    return glycemicIndex;
  }


  public void setGlycemicIndex(BigDecimal glycemicIndex) {
    this.glycemicIndex = glycemicIndex;
  }


  public ComputeGlycemicLoad200ResponseIngredientsInner glycemicLoad(BigDecimal glycemicLoad) {
    
    this.glycemicLoad = glycemicLoad;
    return this;
  }

   /**
   * Get glycemicLoad
   * @return glycemicLoad
  **/
  @javax.annotation.Nonnull
  @ApiModelProperty(required = true, value = "")

  public BigDecimal getGlycemicLoad() {
    return glycemicLoad;
  }


  public void setGlycemicLoad(BigDecimal glycemicLoad) {
    this.glycemicLoad = glycemicLoad;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComputeGlycemicLoad200ResponseIngredientsInner computeGlycemicLoad200ResponseIngredientsInner = (ComputeGlycemicLoad200ResponseIngredientsInner) o;
    return Objects.equals(this.id, computeGlycemicLoad200ResponseIngredientsInner.id) &&
        Objects.equals(this.original, computeGlycemicLoad200ResponseIngredientsInner.original) &&
        Objects.equals(this.glycemicIndex, computeGlycemicLoad200ResponseIngredientsInner.glycemicIndex) &&
        Objects.equals(this.glycemicLoad, computeGlycemicLoad200ResponseIngredientsInner.glycemicLoad);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, original, glycemicIndex, glycemicLoad);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComputeGlycemicLoad200ResponseIngredientsInner {\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    original: ").append(toIndentedString(original)).append("\n");
    sb.append("    glycemicIndex: ").append(toIndentedString(glycemicIndex)).append("\n");
    sb.append("    glycemicLoad: ").append(toIndentedString(glycemicLoad)).append("\n");
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
    openapiFields.add("id");
    openapiFields.add("original");
    openapiFields.add("glycemicIndex");
    openapiFields.add("glycemicLoad");

    // a set of required properties/fields (JSON key names)
    openapiRequiredFields = new HashSet<String>();
    openapiRequiredFields.add("id");
    openapiRequiredFields.add("original");
    openapiRequiredFields.add("glycemicIndex");
    openapiRequiredFields.add("glycemicLoad");
  }

 /**
  * Validates the JSON Object and throws an exception if issues found
  *
  * @param jsonObj JSON Object
  * @throws IOException if the JSON Object is invalid with respect to ComputeGlycemicLoad200ResponseIngredientsInner
  */
  public static void validateJsonObject(JsonObject jsonObj) throws IOException {
      if (jsonObj == null) {
        if (ComputeGlycemicLoad200ResponseIngredientsInner.openapiRequiredFields.isEmpty()) {
          return;
        } else { // has required fields
          throw new IllegalArgumentException(String.format("The required field(s) %s in ComputeGlycemicLoad200ResponseIngredientsInner is not found in the empty JSON string", ComputeGlycemicLoad200ResponseIngredientsInner.openapiRequiredFields.toString()));
        }
      }

      Set<Entry<String, JsonElement>> entries = jsonObj.entrySet();
      // check to see if the JSON string contains additional fields
      for (Entry<String, JsonElement> entry : entries) {
        if (!ComputeGlycemicLoad200ResponseIngredientsInner.openapiFields.contains(entry.getKey())) {
          throw new IllegalArgumentException(String.format("The field `%s` in the JSON string is not defined in the `ComputeGlycemicLoad200ResponseIngredientsInner` properties. JSON: %s", entry.getKey(), jsonObj.toString()));
        }
      }

      // check to make sure all required properties/fields are present in the JSON string
      for (String requiredField : ComputeGlycemicLoad200ResponseIngredientsInner.openapiRequiredFields) {
        if (jsonObj.get(requiredField) == null) {
          throw new IllegalArgumentException(String.format("The required field `%s` is not found in the JSON string: %s", requiredField, jsonObj.toString()));
        }
      }
      if (jsonObj.get("original") != null && !jsonObj.get("original").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `original` to be a primitive type in the JSON string but got `%s`", jsonObj.get("original").toString()));
      }
  }

  public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
    @SuppressWarnings("unchecked")
    @Override
    public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
       if (!ComputeGlycemicLoad200ResponseIngredientsInner.class.isAssignableFrom(type.getRawType())) {
         return null; // this class only serializes 'ComputeGlycemicLoad200ResponseIngredientsInner' and its subtypes
       }
       final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
       final TypeAdapter<ComputeGlycemicLoad200ResponseIngredientsInner> thisAdapter
                        = gson.getDelegateAdapter(this, TypeToken.get(ComputeGlycemicLoad200ResponseIngredientsInner.class));

       return (TypeAdapter<T>) new TypeAdapter<ComputeGlycemicLoad200ResponseIngredientsInner>() {
           @Override
           public void write(JsonWriter out, ComputeGlycemicLoad200ResponseIngredientsInner value) throws IOException {
             JsonObject obj = thisAdapter.toJsonTree(value).getAsJsonObject();
             elementAdapter.write(out, obj);
           }

           @Override
           public ComputeGlycemicLoad200ResponseIngredientsInner read(JsonReader in) throws IOException {
             JsonObject jsonObj = elementAdapter.read(in).getAsJsonObject();
             validateJsonObject(jsonObj);
             return thisAdapter.fromJsonTree(jsonObj);
           }

       }.nullSafe();
    }
  }

 /**
  * Create an instance of ComputeGlycemicLoad200ResponseIngredientsInner given an JSON string
  *
  * @param jsonString JSON string
  * @return An instance of ComputeGlycemicLoad200ResponseIngredientsInner
  * @throws IOException if the JSON string is invalid with respect to ComputeGlycemicLoad200ResponseIngredientsInner
  */
  public static ComputeGlycemicLoad200ResponseIngredientsInner fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, ComputeGlycemicLoad200ResponseIngredientsInner.class);
  }

 /**
  * Convert an instance of ComputeGlycemicLoad200ResponseIngredientsInner to an JSON string
  *
  * @return JSON string
  */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}

