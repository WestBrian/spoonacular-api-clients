/*
 * spoonacular API
 * The spoonacular Nutrition, Recipe, and Food API allows you to access over 380,000 recipes, thousands of ingredients, 800,000 food products, and 100,000 menu items. Our food ontology and semantic recipe search engine makes it possible to search for recipes using natural language queries, such as \"gluten free brownies without sugar\" or \"low fat vegan cupcakes.\" You can automatically calculate the nutritional information for any recipe, analyze recipe costs, visualize ingredient lists, find recipes for what's in your fridge, find recipes based on special diets, nutritional requirements, or favorite ingredients, classify recipes into types and cuisines, convert ingredient amounts, or even compute an entire meal plan. With our powerful API, you can create many kinds of food and especially nutrition apps.  Special diets/dietary requirements currently available include: vegan, vegetarian, pescetarian, gluten free, grain free, dairy free, high protein, whole 30, low sodium, low carb, Paleo, ketogenic, FODMAP, and Primal.
 *
 * The version of the OpenAPI document: 1.0
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
import java.util.ArrayList;
import java.util.List;

/**
 * InlineResponse20033
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2021-09-28T20:40:32.759+02:00[Europe/Berlin]")
public class InlineResponse20033 {
  public static final String SERIALIZED_NAME_CLEAN_TITLE = "cleanTitle";
  @SerializedName(SERIALIZED_NAME_CLEAN_TITLE)
  private String cleanTitle;

  public static final String SERIALIZED_NAME_IMAGE = "image";
  @SerializedName(SERIALIZED_NAME_IMAGE)
  private String image;

  public static final String SERIALIZED_NAME_CATEGORY = "category";
  @SerializedName(SERIALIZED_NAME_CATEGORY)
  private String category;

  public static final String SERIALIZED_NAME_BREADCRUMBS = "breadcrumbs";
  @SerializedName(SERIALIZED_NAME_BREADCRUMBS)
  private List<String> breadcrumbs = new ArrayList<>();

  public static final String SERIALIZED_NAME_USDA_CODE = "usdaCode";
  @SerializedName(SERIALIZED_NAME_USDA_CODE)
  private Integer usdaCode;

  public InlineResponse20033 cleanTitle(String cleanTitle) {
    this.cleanTitle = cleanTitle;
    return this;
  }

   /**
   * Get cleanTitle
   * @return cleanTitle
  **/
  @ApiModelProperty(required = true, value = "")
  public String getCleanTitle() {
    return cleanTitle;
  }

  public void setCleanTitle(String cleanTitle) {
    this.cleanTitle = cleanTitle;
  }

  public InlineResponse20033 image(String image) {
    this.image = image;
    return this;
  }

   /**
   * Get image
   * @return image
  **/
  @ApiModelProperty(required = true, value = "")
  public String getImage() {
    return image;
  }

  public void setImage(String image) {
    this.image = image;
  }

  public InlineResponse20033 category(String category) {
    this.category = category;
    return this;
  }

   /**
   * Get category
   * @return category
  **/
  @ApiModelProperty(required = true, value = "")
  public String getCategory() {
    return category;
  }

  public void setCategory(String category) {
    this.category = category;
  }

  public InlineResponse20033 breadcrumbs(List<String> breadcrumbs) {
    this.breadcrumbs = breadcrumbs;
    return this;
  }

  public InlineResponse20033 addBreadcrumbsItem(String breadcrumbsItem) {
    this.breadcrumbs.add(breadcrumbsItem);
    return this;
  }

   /**
   * Get breadcrumbs
   * @return breadcrumbs
  **/
  @ApiModelProperty(required = true, value = "")
  public List<String> getBreadcrumbs() {
    return breadcrumbs;
  }

  public void setBreadcrumbs(List<String> breadcrumbs) {
    this.breadcrumbs = breadcrumbs;
  }

  public InlineResponse20033 usdaCode(Integer usdaCode) {
    this.usdaCode = usdaCode;
    return this;
  }

   /**
   * Get usdaCode
   * @return usdaCode
  **/
  @ApiModelProperty(required = true, value = "")
  public Integer getUsdaCode() {
    return usdaCode;
  }

  public void setUsdaCode(Integer usdaCode) {
    this.usdaCode = usdaCode;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse20033 inlineResponse20033 = (InlineResponse20033) o;
    return Objects.equals(this.cleanTitle, inlineResponse20033.cleanTitle) &&
        Objects.equals(this.image, inlineResponse20033.image) &&
        Objects.equals(this.category, inlineResponse20033.category) &&
        Objects.equals(this.breadcrumbs, inlineResponse20033.breadcrumbs) &&
        Objects.equals(this.usdaCode, inlineResponse20033.usdaCode);
  }

  @Override
  public int hashCode() {
    return Objects.hash(cleanTitle, image, category, breadcrumbs, usdaCode);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse20033 {\n");
    sb.append("    cleanTitle: ").append(toIndentedString(cleanTitle)).append("\n");
    sb.append("    image: ").append(toIndentedString(image)).append("\n");
    sb.append("    category: ").append(toIndentedString(category)).append("\n");
    sb.append("    breadcrumbs: ").append(toIndentedString(breadcrumbs)).append("\n");
    sb.append("    usdaCode: ").append(toIndentedString(usdaCode)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }

}
